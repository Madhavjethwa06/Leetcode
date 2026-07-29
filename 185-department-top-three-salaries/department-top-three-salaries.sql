# Write your MySQL query statement below
with new_table as(
select d.name as Department,e.name as Employee,e.salary as Salary,
DENSE_RANK() OVER (
    partition by e.departmentId
    ORDER BY salary DESC
) as ranking
from Employee e
inner join Department d
on e.departmentId=d.id
)

select Department, Employee, Salary
FROM new_table
WHERE ranking <= 3;
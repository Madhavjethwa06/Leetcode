# Write your MySQL query statement below
WITH a as(
    select student_id , subject,
    first_value(score) over(partition by student_id , subject order by exam_date) as first_score,
     first_value(score) over(partition by student_id , subject order by exam_date DESC) as latest_score
     FROM Scores

)

select distinct * 
from a
where latest_score>first_score

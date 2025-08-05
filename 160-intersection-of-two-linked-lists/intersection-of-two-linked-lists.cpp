/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tp1=headA;
        ListNode* tp2=headB;
        
        if(!headA || !headB)return nullptr;
        while(tp1!=tp2){
            tp1=tp1?tp1->next:headB;
            tp2=tp2?tp2->next:headA;

        }
        return tp1;

            
            
       
    }
};
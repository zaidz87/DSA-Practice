
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* finalhead = (list1->val <= list2->val)? list1 : list2;

        while(list1 !=NULL && list2 != NULL){
            if(list1->val > list2->val){
                dummy->next = list2;
                dummy = list2;
                list2 = list2->next;
            }
            else if(list1->val <= list2->val){
                dummy->next = list1;
                dummy = list1;
                list1 = list1->next;
            }
        }

        if(list1) dummy->next = list1;
        if(list2) dummy->next = list2;


        return finalhead;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l2) {
            return l1;
        } else if (!l1) {
            return l2;
        }

        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int sum = 0;
        int car = 0;
        while (cur1 && cur2) {
            sum = cur1->val + cur2->val + car;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            car = sum / 10;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        while (cur1) {
            sum = cur1->val + car;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            car = sum / 10;
            cur1 = cur1->next;
        }
        while (cur2) {
            sum = cur2->val + car;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            car = sum / 10;
            cur2 = cur2->next;
        }
        if(car != 0){
            tail->next = new ListNode(1);
            tail = tail->next;
        } 
        return dummy->next;
    }
};
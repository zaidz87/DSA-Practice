
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;            
            prev = curr;                  
            curr = temp;                  
        }

        while(prev){
            if(head->val != prev->val) return false;
            head = head->next;
            prev = prev->next;
        }

        return true;
    }
};
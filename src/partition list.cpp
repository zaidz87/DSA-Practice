
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head)
            return head;

        // two lists: < x and >= x
        ListNode *lessH = NULL, *lessT = NULL;
        ListNode *bigH = NULL, *bigT = NULL;

        ListNode* cur = head;

        // Step 1: split into two lists
        while (cur) {

            if (cur->val < x) {
                if (!lessH) {
                    lessH = cur;
                    lessT = cur;
                } else {
                    lessT->next = cur;
                    lessT = cur;
                }
            } else {
                if (!bigH) {
                    bigH = cur;
                    bigT = cur;
                } else {
                    bigT->next = cur;
                    bigT = cur;
                }
            }

            cur = cur->next;
        }

        // Step 2: end big list
        if (bigT)
            bigT->next = NULL;

        // Step 3: connect less -> big
        if (lessT) {
            lessT->next = bigH;
            return lessH;
        }

        // if no less list, return big
        return bigH;
    }
};
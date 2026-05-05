class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // find length and tail
        int len = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            len++;
        }

        k = k % len;
        if (k == 0) return head;

        // make it circular
        tail->next = head;

        // find new tail: (len - k - 1) steps from head
        ListNode* newTail = head;
        for (int i = 0; i < len - k - 1; i++) {
            newTail = newTail->next;
        }

        // new head
        ListNode* newHead = newTail->next;

        // break circle
        newTail->next = NULL;

        return newHead;
    }
};
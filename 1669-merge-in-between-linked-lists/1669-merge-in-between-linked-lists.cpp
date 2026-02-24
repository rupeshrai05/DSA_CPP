class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        
        ListNode* prevA = list1;
        for (int i = 0; i < a - 1; i++) {
            prevA = prevA->next;
        }

        
        ListNode* curr = prevA;
        for (int i = a; i <= b; i++) {
            curr = curr->next;
        }
        ListNode* afterB = curr->next;

        
        ListNode* tail = list2;
        while (tail->next) {
            tail = tail->next;
        }

      
        prevA->next = list2;
        tail->next = afterB;

        return list1;
    }
};
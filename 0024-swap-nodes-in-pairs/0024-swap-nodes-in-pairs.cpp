class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (count >= 2) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
            curr = first->next;

            count -= 2;
        }

        return dummy->next;
    }
};
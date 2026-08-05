class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int c1 = 0, c2 = 0;

        ListNode* temp = headA;
        ListNode* tempA = headB;

        while (temp) {
            c1++;
            temp = temp->next;
        }

        while (tempA) {
            c2++;
            tempA = tempA->next;
        }

        temp = headA;
        tempA = headB;

        if (c1 > c2) {
            int diff = c1 - c2;
            while (diff--) temp = temp->next;
        } else {
            int diff = c2 - c1;
            while (diff--) tempA = tempA->next;
        }

        while (temp && tempA) {
            if (temp == tempA)
                return temp;

            temp = temp->next;
            tempA = tempA->next;
        }

        return NULL;
    }
};
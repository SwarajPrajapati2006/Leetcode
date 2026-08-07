/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>m1;

        ListNode* temp =  head;
        while(temp){
            m1[temp->val]++;
            temp =  temp->next;
        }

        ListNode* dummy =  new ListNode(0);
        temp = head;
        ListNode* curr = dummy;
        while(temp){
            if(m1[temp->val]==1){
                ListNode* singleFreq =  new ListNode(temp->val);
                    curr->next =  singleFreq;
                 curr =  curr->next;
            }
            temp =  temp->next;
        }

        return dummy->next;

    }
};
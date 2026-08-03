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
    void reorderList(ListNode* head) {
        // ListNode* temp  =  head;
        ListNode*  slow =  head;
        ListNode*  fast= head;
        while(fast->next!=NULL && fast->next->next!=NULL ){
            slow = slow->next ;
            fast =  fast->next->next;
        }
      ListNode*   list2 =  slow->next;
         slow->next = NULL;

       ListNode* curr =  list2;
       ListNode* prev = NULL;

       ListNode* next = NULL;
        
        while(curr!=NULL){
            next =  curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        list2 = prev;

        ListNode* first = head;

        while(list2!=NULL){

            ListNode* temp1  = first->next;
            ListNode* temp2 =  list2->next;

            first->next  = list2;
            list2->next = temp1;

            first= temp1;
            list2 = temp2;
        }

        
        
    }
};
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* evenTemp = head->next;
        ListNode* oddTemp  = head;
        ListNode* headE = evenTemp;

          while(evenTemp!=NULL && evenTemp->next!=NULL){
            oddTemp->next = evenTemp->next;
            oddTemp =  oddTemp->next;

            evenTemp->next = oddTemp->next;
            evenTemp =  evenTemp->next;

            oddTemp->next  = headE;
          }
          return head;


    }
};
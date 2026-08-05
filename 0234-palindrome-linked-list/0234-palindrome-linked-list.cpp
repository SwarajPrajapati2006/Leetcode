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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next!=NULL){
            slow =  slow->next;
            fast =  fast->next->next;
        }
             ListNode* curr =  slow; 
              ListNode* prev =  NULL;
               ListNode* nxt =  NULL;
        while(curr){
           nxt =  curr->next;
           curr->next = prev;

           prev = curr;
           curr =  nxt;


        }
       ListNode* first = head;
        ListNode*    second =  prev;
        bool check =  false;
        while(second){
            if(first->val!=second->val){
             return false;
            } 
            first =  first->next;
            second =  second->next; 
        }
        return true;
    }
};
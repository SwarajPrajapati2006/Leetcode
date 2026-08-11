class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s(nums.begin(),nums.end());

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        // while (temp) {

        //     bool check = false;

        //     for (int i = 0; i < nums.size(); i++) {
        //         if (nums[i] == temp->val) {
        //             check = true;
        //             break;
        //         }
        //     }

        //     if (check) {
        //         prev->next = temp->next;
        //         temp = temp->next;
        //     } else {
        //         prev = temp;
        //         temp = temp->next;
        //     }
        // }

        // return dummy->next;



        while(temp){
            if(s.count(temp->val)){
                prev->next = temp->next;
                temp=  temp->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        
        
        }
        return dummy->next;
        
    }
};
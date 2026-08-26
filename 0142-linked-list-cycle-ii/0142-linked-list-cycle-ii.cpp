/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> times;
        ListNode* repeat=head;
        while(repeat!=NULL){
            times[repeat]++;
            if(times[repeat]>1){
                return repeat;
            }
            repeat=repeat->next;
        }
        return NULL;
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {//same is linked list cycle 2
    int slow=nums[0];
    int fast=nums[nums[0]];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[nums[fast]];
    }
    slow=0;
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
        
    }
};
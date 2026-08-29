class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int lengh=INT_MAX;
        int n = nums.size();
        int sum=0;
        while(high<n){
            sum+=nums[high];
            while(sum >= target){
                lengh=min(lengh,high-low+1);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(lengh==INT_MAX) return 0;
        return lengh;
        
    }
};
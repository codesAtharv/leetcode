class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
        int ans=INT_MIN;
        unordered_map<int,int> mpp;
        while(high<fruits.size()){
            mpp[fruits[high]]++;
            while(mpp.size()>2){
                mpp[fruits[low]]--;
                if(mpp[fruits[low]]==0){
                    mpp.erase(fruits[low]);
                }
                low++;
            }
            
            ans=max(ans,high-low+1);//any way check at every part if mpp.size<2 
            
            high++;
        }
        return ans;
        
    }
};
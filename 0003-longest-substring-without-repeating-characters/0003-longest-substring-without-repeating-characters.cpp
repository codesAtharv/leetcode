class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int high=0;
        int n=s.length();
        int leng=0;
        unordered_map<char,int> mpp;
        while(high<n){
            mpp[s[high]]++;
            while(mpp[s[high]]>1){
                mpp[s[low]]--;
                if(mpp[s[high]]==0){
                    mpp.erase(s[high]);
                }
                low++;
            }
            leng=max(leng,high-low+1);
            high++;
        }
        return leng;
    }
};
class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int countmax=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        countmax=count;
        if(count==k){
            return k;
        }
        for(int i=k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
                count--;
            }
            countmax=max(countmax,count);
            if(countmax==k) return k;
        }
        return countmax;
    }
};
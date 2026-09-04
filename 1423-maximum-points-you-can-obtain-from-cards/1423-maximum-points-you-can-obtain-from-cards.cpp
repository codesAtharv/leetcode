class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     int j=cardPoints.size();
     int lsum=0;
     int rsum=0;
     int maxpoint=0;
    for(int i=0;i<k;i++){
        lsum+=cardPoints[i];
    }   
    maxpoint=lsum+rsum;
    int h=1;
    while(lsum!=0){
        lsum-=cardPoints[k-h];
        rsum+=cardPoints[j-h];
        h++;
        maxpoint=max(maxpoint,lsum+rsum);
    }
    return maxpoint;


    }
};
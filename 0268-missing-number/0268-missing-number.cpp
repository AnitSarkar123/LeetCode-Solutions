class Solution {
public:
    int missingNumber(vector<int>& v) {
    // int k=v.size();
        long s=(v.size()*(v.size()+1))/2;
        long sum=0;
        // cout<<k<<endl;
        for( int elements : v){
            sum=sum+elements;
        }
        // int ans=s-sum;
        return (int)(s-sum);
    }
   
};
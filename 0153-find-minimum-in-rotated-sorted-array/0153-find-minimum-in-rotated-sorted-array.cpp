class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1,mini=INT_MAX;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[s]<=nums[e]){
                mini=min(mini,nums[s]);
                break;
            }
            if(nums[s]<=nums[m]){
                mini=min(mini,nums[m]);
                s=m+1;
            }
            else{
                mini=min(mini,nums[m]);
                e=m-1;
            }
        }
        return mini;
    }
};
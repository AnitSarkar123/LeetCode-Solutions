class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx =-1;
       int n=nums.size()-1;
        for(int i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx =i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=idx;
        for(int j=idx;j<n+1;j++){
            if(nums[idx-1]<nums[j] and nums[j]<=nums[prev]){
                prev=j;
                
            }
        }
            swap(nums[idx-1],nums[prev]);
            reverse(nums.begin()+idx,nums.end());
            }
        
}
    
};
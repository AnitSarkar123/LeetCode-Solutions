class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        //NOTE:When i equals n-1 (the last iteration of the loop), nums[i+1] attempts to access nums[n], which is out of bounds since array indices in C++ are 0-based and go from 0 to n-1. Accessing nums[n] tries to access an element beyond the end of the array, leading to undefined behavior and potentially a runtime error. for this reason for(int i=0;i<n;i++){
           // if(nums[i]>nums[i+1]){
           //     count++;
           // }---->not working
             
        
        
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
             
        }
        if(nums[n-1]>nums[0]){
                count++;
            }
        return count<=1;
    }
};
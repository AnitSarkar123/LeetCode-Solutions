class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cout=0;
     int   max=0;
        for(int i=0;i<n;i++){
            if( nums[i]==1){//if(nums[i-1]==nums[i] && nums[i]==1) not applied here
                cout++;
            }
             if(max<cout){
                max=cout;
            }
             if(nums[i]==0){
                cout=0;
            }
        }
        return max;
     
    }
};
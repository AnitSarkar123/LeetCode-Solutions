class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() ==0){
            return 0;
        }
        else {
            int k=0;
            for(int i=1;i<nums.size();i++){
                if(nums[k]!=nums[i]){
                    nums[++k]=nums[i];
                }
            }
            return k+1;
        }
       
        }
    
};
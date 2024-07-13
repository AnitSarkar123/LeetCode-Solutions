class Solution {
public:
    bool search(vector<int>& nums, int target) {
           int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return 1;
            }
            if(nums[mid]==nums[s] && nums[mid]==nums[e]){
                e--;
                s++;
            }
            else if(nums[mid]>=nums[s]){
                if(nums[mid]>=target && target>=nums[s]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return 0;
    }
};
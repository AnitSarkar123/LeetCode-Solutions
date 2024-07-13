class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target){
//                 return i;
//             }
//             else if(nums[i]<target &&(i == nums.size() - 1 || nums[i + 1] > target)){
//                 return (i+1);
//             }
//              else if(nums[i] > target ){
//                 return i;
//             }
//         }
       
//         return (nums.size()+1);
        
        int n = nums.size(); // size of the array
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (nums[mid] >= target) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
    }
};
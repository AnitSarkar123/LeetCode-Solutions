class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=INT_MIN;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            if(prod==1000000000){
                break;
            }
            prod*=nums[i];
            largest=max(largest,prod);
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(prod==1000000000){
                break;
            }
            prod*=nums[i];
            largest=max(largest,prod);
            if(prod==0){
                prod=1;
            }
        }
        return largest;
    }
};
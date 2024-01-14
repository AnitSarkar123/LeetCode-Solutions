class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    
    	return max(arr[0]*arr[1]*arr[arr.size()-1],arr[arr.size()-1]*arr[arr.size()-2]*arr[arr.size()-3]);
    }
};
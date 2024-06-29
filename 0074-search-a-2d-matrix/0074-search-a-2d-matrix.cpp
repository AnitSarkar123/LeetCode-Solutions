class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int m = matrix.size();
        int n = matrix[0].size();
        int i=0, j=m-1;
        while(i<n && j>=0){
            if(matrix[j][i] == target)
                return true;
            if(matrix[j][i] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
    
};
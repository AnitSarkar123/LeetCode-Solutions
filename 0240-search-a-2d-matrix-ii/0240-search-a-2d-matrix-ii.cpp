class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ///******************not worked because not shorted are present********************
//         int low=0,r=matrix.size(),c=matrix[0].size()-1;
//         int high=r*c-1;
        
//         while(low<=high){
//             int element=matrix[mid/c][mid%c];
//             int mid=low+(high-low)/2;
//             if(element==target){
//                 return true;
//             }
//             if(element>target){
//                 high=mid-1;
                
//             }
//             else{
//                 low=mid+1;
//             }
            
//         }
//         return false;
         int row = 0;
        int col = matrix[0].size() - 1;
        
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            }
            if (matrix[row][col] < target) {
                row++;
            } else {
                col--;
            }
        }
        
        return false;
        
    }
};
class Solution {
public:
    void sortColors(vector<int>& a) {
      //  sort(a.begin(),a.end());-->short cut
        int n=a.size();
        int high=n-1,low=0,mid=0;
        while(mid<=high){
               if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1) {
            mid++;
        }
        else {
            swap(a[mid], a[high]);
            high--;
        }
            
        }
    }
};
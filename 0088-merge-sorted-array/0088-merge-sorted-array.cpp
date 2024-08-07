class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // correct but t.c->0((m+n)log(m+n))
        //  for (int j = 0, i = m; j<n; j++){
        //     nums1[i] = nums2[j];
        //     i++;
        // }
        // sort(nums1.begin(),nums1.end());
        //better approch T.c->0(m+n)
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int ind=0;
        sort(n.begin (),n.end());
        // vector<int>ans;
        for(int i=0;i<n.size()-1;i++){
        if(n[i]==n[i+1]){
            // ans.push_back(n[i]);
            ind=n[i];
            break;

        }

        }
        return ind;
    }
};
// };
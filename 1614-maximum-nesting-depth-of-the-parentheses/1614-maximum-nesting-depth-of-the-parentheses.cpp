class Solution {
public:
    int maxDepth(string s) {
         int ans=0,p=0;
        
        for(auto c:s){
            p=p+(c=='(')-(c==')');
            ans=max(ans,p);
        }
        return ans;
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>indexS(160,0);
        vector<int>indexT(160,0);
        int lenS=s.length();
        int lenT=t.length();
        if(lenS !=lenT){
            return false;
        }
        for(int i=0;i<lenS;i++){
            if(indexS[s[i]] !=indexT[t[i]]){
                return false;
            }
            indexS[s[i]] = i + 1; // updating position of current character
            indexT[t[i]] = i + 1;
        }
        return true;
        
    }
};
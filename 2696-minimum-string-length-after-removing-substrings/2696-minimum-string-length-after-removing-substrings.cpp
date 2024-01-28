class Solution {
public:
    int minLength(string s) {
        int len=s.size();
        
        stack<char>st;
        
        for(int i=0;i<len;i++){
            
            if(st.empty()){
                st.push(s[i]);
            }
            
            else if(s[i]=='B'){
                if(st.top()=='A' && !st.empty()){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
                
            }
            
            else if(s[i]=='D'){
                if(st.top()=='C' && !st.empty()){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
                
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
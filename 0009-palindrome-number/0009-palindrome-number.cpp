class Solution {
public:
    bool isPalindrome(int x) {
        long long sum=0;
        int y;
        y=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            sum=sum*10+x%10;
            x=x/10;
        }
        if(sum==y){
            return true;
        }
        else{
           return false;
        }
        
        
    }
};
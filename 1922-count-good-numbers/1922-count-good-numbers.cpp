class Solution {
public:
     int mod=1e9+7;
    int binExpo(long long x,long long n){
        int ans=1;
        while(n){
            if(n&1){
                ans=(ans*x)%mod;
                n--;
        
            }
            x=(x*x)%mod;
            n>>=1;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
       long long ans =binExpo(20,n/2)%mod;
        if(n%2){
            ans =(ans*5)%mod;
        }
        return ans;
    }
};
class Solution {
public:
   int sq_sum(int &n){
          int k, sum=0;
        while(n !=0){
            k=n%10;
            sum =sum+k*k;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        
        unordered_set<int>s;
        while(s.find(n)==s.end()){
            s.insert(n);
           n= sq_sum( n);
            if(n==1){
                return true;
            }
            
        }
        return false;
    }
};
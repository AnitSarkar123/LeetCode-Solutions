class Solution {
public:
   //int sq_sum(int &n){//this is also correct
    int sq_sum(int n){
          int k, sum=0;
        while(n !=0){
            k=n%10;
            sum =sum+k*k;
            n=n/10;
        }
        return sum;
    }
    /* This is also correct
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
    }*/
    bool isHappy(int n) {//in this method the &n upper not working 
       int slow=n;
        int first=sq_sum(n);
        if(slow==1|| first==1){
            return true;
        }
        while(slow !=first){
            slow=sq_sum(slow);
            first=sq_sum(sq_sum(first));
             if(slow==1|| first==1){
            return true;
        }
        }
        return false;
        
    }
};
class Solution {
public:
    double myPow(double x, int n) {
        
          if(n < 0) {
            x = 1 / x;
        } 
        
        long num = labs(n);//labs() is a function that calculates the absolute value of a long integer.
        
        double pow = 1;
        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
            }
            
            x *= x;
            num >>= 1;
        }
        
        return pow;
    }
};
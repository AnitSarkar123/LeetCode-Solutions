class Solution {
public:
    int maxProfit(vector<int>&v) {
       // int mini=v[0];
       //  int profit =0;
       //  for(int i=0;i<v.size();i++){
       //      int diff=v[i]-mini;
       //      profit =max(profit,diff);
       //      mini=min(mini,v[i]);
       //  }
       //  return profit;
        
        
        //*****************in more optimise way******
        
        
        int buy=v[0];
        int profit=0;
        for(int i=0;i<v.size();i++){
            if(buy>v[i]){
                buy=v[i];
            }
            else if((v[i]-buy)>profit){
                profit=v[i]-buy;
            }
        }
        return profit;
        
    }
};
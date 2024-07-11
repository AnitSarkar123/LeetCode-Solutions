class Solution {
    /*
    Part-1:
Get the frequency of each character, the best way is to make a Hash Map or you can make a vector of pair<char,int> but then you'll have to initialize each value to 0 manually.

Part-2:
Since, we cant sort map directly we will push the data in a string to sort it as per req.

Part-3:
We can define custom methods to sort an array or vector using sort() method, here we sorted them in descending order based on the second value of pair, i.e. frequency

Part-4:
freq vector is already sorted as per requirement, we just need to append the characters (iterator.first) the number of times they appeared in the original string (iterator.second).
*/
public:
    string frequencySort(string s) {
    
         // Part-1
        map<char, int> mp;
        for(auto x: s){
            mp[x]++;
        }
        //part-2
        vector<pair<char, int>> freq;
        for( auto &it : mp){
            freq.push_back(it);
        }
        //part-3
        sort(freq.begin(), freq.end(), [](auto& a, auto& b) { 
        return a.second > b.second;
        });
         // Part-4
        string ans = "";
        for(int i=0; i<freq.size(); i++){
            for(int j=0; j<freq[i].second; j++){
                ans+=freq[i].first;
            }
        }
        
        return ans;
    }
};
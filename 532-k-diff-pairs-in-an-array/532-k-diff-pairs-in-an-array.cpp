class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        int count = 0;
        
        if (k > 0) {
            for(auto i:mp)
                if(k>0 && mp.find(i.first+k) != mp.end()) 
                    count++;
        }
        
        if(k==0){
            for(auto i:mp)
                if (i.second > 1)
                    count++;
        }
        
        return count;
    }
};
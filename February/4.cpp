class Solution {
public:
    int findLHS(vector<int>& nums) {
    
        unordered_map<int,int>mp;
        for(int num:nums)mp[num]++;
        
        int maxi=0;
        for(auto x:mp){
        if(mp.find(x.first+1)!=mp.end())maxi=max(maxi,x.second+mp[x.first+1]);
        }
        return maxi;
    }
};

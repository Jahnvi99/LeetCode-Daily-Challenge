class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows=mat.size();
        int cols=mat[0].size();
        vector<pair<int,int>>mp;
        for(int i=0;i<rows;i++){
            int count=0;
            int j=0;
            while(j<cols&&mat[i][j]==1){
                count++;
                j++;
            }
            mp.push_back({count,i});
        }
        sort(mp.begin(),mp.end());
        
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(mp[i].second);
        }
        return ans;
    }
};

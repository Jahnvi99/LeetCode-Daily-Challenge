class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        string s="";
        int si=arr.size();
        for(int i=0;i<si;i++)s=s+to_string(arr[i])+"#";
        
        int size=pieces.size();
        for(int i=0;i<size;i++){
            auto it=pieces[i].begin();
            string temp;
            while(it!=pieces[i].end()){
                temp=temp+to_string(*it)+"#";
                it++;
            }
            if(s.find(temp)==string::npos)return false;
        }
        return true;
    }
};

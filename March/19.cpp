class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n =rooms.size();
        vector<bool>visited(n,false);
        visited[0]=true;
        stack<int>s;
        s.push(0);
        while(!s.empty()){
            int tmp=s.top();
            s.pop();
            for(int i:rooms[tmp]){
                if(visited[i]==false){
                    visited[i]=true;
                    s.push(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false)return false;
        }
        return true;
    }
};

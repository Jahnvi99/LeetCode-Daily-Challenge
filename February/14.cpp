class Solution {
public:
    bool isBipartite(vector<vector<int>>& g) {
        const int N = g.size();
        vector<int> colors(N, 0); 
        queue<int> q;
        for(int i = 0; i < N; i++){
            if(colors[i]) continue;
            colors[i] = 1;
            q.push(i);            
            while(!q.empty()){
                auto cur = q.front(); q.pop();
                for(auto next: g[cur]){
                    if(colors[next] == colors[cur]) return false;
                    if(colors[next] == -1 * colors[cur]) continue;
                    colors[next] = -1 * colors[cur];
                    q.push(next);
                }
            }
        }
        return true;
    }
};

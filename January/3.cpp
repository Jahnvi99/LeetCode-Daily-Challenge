class Solution {
public:
    void dfs(vector<bool>&visited,int index,int n,int &count){
        if(index>n)count++;
            
        for(int i=1;i<=n;i++){
            if(!visited[i]==true&&(index%i==0||i%index==0)){
                visited[i]=true;
                dfs(visited,index+1,n,count);
                visited[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        vector<bool>visited(n+1,false);
        int count=0;
        dfs(visited,1,n,count);
        return count;
    }
    
};

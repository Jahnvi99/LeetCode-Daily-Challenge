class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        ans.resize(2);
        int n=nums.size();
        int arr[10001]={0};
        for(int i=0;i<n;i++)arr[nums[i]]++;
        for(int i=1;i<=n;i++){
            if(arr[i]==2)ans[0]=i;
            else if(arr[i]==0)ans[1]=i;
        }
        return ans;
    }
};

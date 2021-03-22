class Solution {
public:
    vector<int> count(int i){
        vector<int>arr(10,0);
        while(i>0){
            arr[i%10]++;
            i/=10;
        }
        return arr;
    }
    bool reorderedPowerOf2(int N) {
        vector<int> ans=count(N);
        for(int i=0;i<31;i++){
            if(ans==count(1<<i))return true;
        }
        return false;
    }
};

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int size=s.size();
        if(size<k)return false;
        int need=1<<k;
        
        unordered_set<string>us;
        for(int i=0;i<=size-k;i++){
            string a=s.substr(i,k);
            if(us.find(a)==us.end()){
                us.insert(a);
                need--;
                if(need==0)return true;
            }   
        }
        return false;
    }
};

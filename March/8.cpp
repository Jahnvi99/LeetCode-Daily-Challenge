class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)return 0;
        
        string s_new=s;
        reverse(s.begin(),s.end());
        return (s==s_new?1:2);
    }
};

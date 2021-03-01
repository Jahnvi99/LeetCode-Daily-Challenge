class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s(candyType.begin(),candyType.end());
        int n=candyType.size();
        int s_n=s.size();
        if(s_n>(n/2))
            return n/2;
        else    
            return s_n;
    }
};

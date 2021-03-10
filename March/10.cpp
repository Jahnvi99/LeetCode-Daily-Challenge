class Solution {
public:
    string intToRoman(int n) {
        string thousands[]={"","M","MM","MMM"};
        string hundreds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        
        string ans=thousands[n/1000]+hundreds[(n%1000)/100]+tens[(n%100)/10]+ones[n%10];
    return ans;
    }
};

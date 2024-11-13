class Solution {
public:
    bool checkIfPangram(string s) {
        vector<char>alpha(26,0);
        for(int i=0;i<s.length();i++)
        {
            alpha[s[i]-'a']=1;
        }
        for(auto i:alpha)
        {
            if(i==0)return false;
        }
        return true;
    }
};
tc:O(n)
sc:O(1)

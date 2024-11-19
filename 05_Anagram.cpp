//brute force 
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
    }
};
/*
TC : O(nlogn * m log m)
SC : O(1)
*/

----------------------------********************--------------------
  //better solution : using map 
  
//using map 
class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>freqs;
       unordered_map<char,int>freqt;
        for(int i =0 ; i < s.size();i++)
        {
            freqs[s[i]]++;
        }
        for(int i =0 ; i < t.size();i++)
        {
            freqt[t[i]]++;
        }
        return freqs==freqt;

        
    }
};
/*
TC : O(n*m)
SC : O(1)
*/
-------------------------*******************---------------------

  //optimal solution using one frquency table 
  class Solution {
public:
    bool isAnagram(string s1, string s2) {
         int freq[256]={0};
         for(int i= 0 ; i < s1.length();i++)
         {
            freq[s1[i]]++;
         }
         for(int i= 0 ; i < s2.length();i++)
         {
            freq[s2[i]]--;
         }
         for(int i= 0 ; i < 256;i++)
         {
           if( freq[i]!=0) return false;
         }
         return true;

    }
};
//TC:O ( n * m);
//SC:O (1)
  

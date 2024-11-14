//using inbuild function
string sort(string s){
  sort(s.begin(),s.end());
  return s;
}
TC:O(nlogn)
  SC:O(1)


  -------------------------------------*********************************---------------------------------------------------
  //using count
string sort(string s){
     vector<int> alpha(26, 0);
    string ans = "";

    // Count frequency of lowercase alphabet characters
    for (int i = 0; i < s.size(); i++) {
        
            alpha[s[i] - 'a']++;
        
    }

    // Build the sorted string
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        while (alpha[i]) {
            ans = ans + ch;
            alpha[i]--;
        }
    }

    return ans;
}
//TC and SC:O(n)

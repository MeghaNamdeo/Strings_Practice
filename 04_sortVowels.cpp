class Solution {
public:
    string sortVowels(string s) {
        vector<int> low(26, 0);
        vector<int> upp(26, 0);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                low[s[i] - 'a']++;
                s[i] = '#';
            } else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                upp[s[i] - 'A']++;
                s[i] = '#';
            }
        }
        string ans;
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;
            while (upp[i]) {
                ans += c;
                upp[i]--;
            }
        }
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while (low[i]) {
                ans += c;
                low[i]--;
            }
        }
        int first = 0, second = 0;
        while (second < ans.size()) {
            if (s[first] == '#') {
                s[first] = ans[second];
                second++;
            }
            first++;
        }
        return s;
    }
};
TC and Sc:O(n)

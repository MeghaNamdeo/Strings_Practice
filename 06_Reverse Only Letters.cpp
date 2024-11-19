leetcode: https://leetcode.com/problems/reverse-only-letters/description/
coding ninja :https://www.naukri.com/code360/problems/reverse-only-letters_1235236?leftPanelTabValue=SUBMISSION


#include <bits/stdc++.h>
bool isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string reverseOnlyLetters(string s) {
    int start = 0, end = s.length() - 1;

    while (start < end) {
        if (!isLetter(s[start])) {
            start++;
            continue;
        }

        if (!isLetter(s[end])) {
            end--;
            continue;
        }

        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}//Time Complexity: O(n)
//Space Complexity: O(1)

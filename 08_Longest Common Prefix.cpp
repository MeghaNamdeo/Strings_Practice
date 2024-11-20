#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& arr, int n) {
    string ans;
    int index = 0;

    while (true) {
        char curr_ch = 0;

        for (const auto& str : arr) {
            // Check if `index` is out of bounds for the current string
            if (index >= str.size()) {
                curr_ch = 0;
                break;
            }

            // Initialize `curr_ch` with the first string's character
            if (curr_ch == 0) {
                curr_ch = str[index];
            }
            // If current character does not match
            else if (str[index] != curr_ch) {
                curr_ch = 0;
                break;
            }
        }

        // If no common character at this index, break the loop
        if (curr_ch == 0) {
            break;
        }

        // Append the common character to the answer
        ans.push_back(curr_ch);
        index++;
    }

    return ans;
}/*
Time Complexity:O(n*L)
L : length of each string
Space Complexity: O(L)
*/

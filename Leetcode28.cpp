#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i=0; i<=n-m; i++) {
            for(int j=0; j<m; j++) {
                if(needle[j] != haystack[i+j]) {
                    break;
                }
                if(j == m - 1) {
                    return i;
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution sol;
    int ans = sol.strStr("sadbutsad","sad");
    cout << "Ans is: " << ans << endl;
    int result = sol.strStr("leetcode","leeto");
    cout << "Ans is: " << result << endl;
    
}
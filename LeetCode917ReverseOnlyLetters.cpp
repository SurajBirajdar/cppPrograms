#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    static string reverseOnlyLetters(string s) {
        int l=0; 
        int h=s.size()-1;
        while(l<h){
            if((isalpha(s[l]) && (isalpha(s[h])))) {
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(!isalpha(s[l])) {
                l++;
            }
            else {
                // s[h] is non alpha, so marking h--;
                h--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = sol.reverseOnlyLetters("a-bC-dEf-ghIj");
    cout << "answer is: " + s << endl;
}

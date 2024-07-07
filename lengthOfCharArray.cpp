#include<iostream>
using namespace std;


int lengthOfCharArray(char ch[]) {
        int index = 0;
        while(ch[index] != '\0') {
            index++;
        }
        return index;
}

int main() {
    char ch[] = "suraj  Birajdar";
    cout << "Length of character array ch is: " << lengthOfCharArray(ch) << endl;
}
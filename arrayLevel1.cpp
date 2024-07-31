#include<iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "address of a is: " << &a << endl;
    cout << "size of a is: " << sizeof(a) << endl;

    int arr[10];
    cout << "Base address of arr is: " << &arr << endl;
    cout << "Base address of arr is: " << arr << endl;

    

}
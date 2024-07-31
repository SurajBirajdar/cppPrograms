#include<iostream>
using namespace std;

int main() {
    
    int a = 5;
    cout << "address of a is: " << &a << endl;
    cout << "size of a is: " << sizeof(a) << endl;

    int arr[10];
    cout << "Base address of arr is: " << &arr << endl;
    cout << "Base address of arr is: " << arr << endl;

    int b[] = {12,13,14,15};
    for(int i=0; i<4; i++) {
        cout << b[i] << endl;
    }

    int brr[5];
    int size = 5;
    for(int i=0; i<size; i++) {
        cout << "Enter the value at index: " << i << "- ";
        cin >> brr[i];
        cout << endl;
    }

    for(int i=0; i<size; i++) {
        cout << "Value at index: " << i << ": ";
        cout << brr[i];
        cout << endl;
    }

    //Formula for brr[i]
    //value at (base address + (dataType Size * index))

    int crr[10];
    int n = 10;

    for(int i=0; i<n; i++) {
        cin >> crr[i];
    }

    for(int i=0; i<n; i++) {
        crr[i] = crr[i] * 2;
    }

    for(int i=0; i<n ; i++) {
        cout << crr[i] << " ";

    }
    
    int drr[5];
    int d =5;
    for(int i=0; i<d; i++) {
        cin >> drr[i];
    }
    cout << endl;
    int sum = 0;
    for(int i=0; i<d; i++) {
        sum = sum + drr[i];
    }

    cout << "Sum is: " << sum << endl;
}
#include<iostream>
using namespace std;

    bool linearSearch(int arr[], int size, int target) {
        for(int i=0; i<size; i++) {
            if(arr[i] == target) {
                return true;
                break;
            }
        }
        return false;
    }
    
    // This function will count zero's and one's in array
    void countZeroOne(int arr[], int size) {
        int zeroCount = 0;
        int oneCount = 0;
        for(int i=0; i<size; i++) {
            if(arr[i] == 0) {
                zeroCount++;
            } else if( arr[i] == 1) {
                oneCount++;
            }
        }
        cout << "Zero count is: " << zeroCount << endl;
        cout << "One count is: " << oneCount << endl;
    }

    //This functions will give minimum number in a given array
    int minNumInArray(int arr[], int size) {
        int minAns = INT_MAX;
        for(int i=0; i<size; i++) {
            if(arr[i] < minAns) {
                minAns = arr[i];
            }
        }
        return minAns;
    }

int main() {
    
    /*int a = 5;
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

    int zrr[] = {15,20,67,89,35};
    int size = 5;
    int target = 36;
    bool ans = linearSearch(zrr,size, target);
    if(ans == true) {
        cout << "Target Found" << endl;
    } else {
        cout << "Target not found" << endl;
    } 
    
   int mrr[] = {0,1,0,0,1,1,1,1,0,0,0,1,0};
   int size = 13;
   //zero = 7
   //one = 6
   countZeroOne(mrr,size); */

   int nrr[] = {67,23,68,10,12};
   int size = 5;
   int minNum = minNumInArray(nrr,size);
   cout << "Minimum number in given array is: " << minNum << endl;


}
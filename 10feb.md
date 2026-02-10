# 10 feb 2026
Do assignments of module 1 upto program number 4.  
  
Q1. Write a program to read n integers and perform array insertion and deletion at a given position (0-based), displaying the array after each operation.  
```cpp

#include <iostream>
using namespace std;

// Write a program to read n integers and perform array insertion and deletion at a given position (0-based), displaying the array after each operation.  

void insert(int num, int pos, int* arr, int n){
    for (int i=(n-1);i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
}

void deletes(int pos, int* arr, int n){
    for (int i=(pos+1);i<n;i++){
        arr[i-1] = arr[i];
    }
}


void print(int* arr, int n){
    cout << "Printing array: \n";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}

int main(){

    int n, pos;
    cout << "Enter n: ";
    cin >> n;
    int arr[n+100];
    cout << "\nEnter n elements: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "\n----------\n";
    cout << "Type 0 for insertion and 1 for deletion: ";
    int choice;
    cin >> choice;
    cout << "\n";

    switch (choice) {
        case 0:
            cout << "choose a position between 0 and " << (n-1) << " : ";
            cin >> pos;
            cout << "\nEnter the number to insert: ";
            int num;
            cin >> num;
            cout << "\n";
            insert(num, pos, arr, n);
            print(arr, n+1);
            return 0;
        case 1:
            cout << "choose a position between 0 and " << (n-1) << " : ";
            cin >> pos;
            cout << "\n";
            deletes(pos, arr, n);
            print(arr, n-1);
            return 0;
    }
    return 0;
}

```
  
Q2. Write a program to implement Linear search and Binary seach and print the index of the key and the number of comparisons made in each method.  
```cpp

```
#include <iostream>
using namespace std;

//  Write a program to implement Linear search and Binary seach and print the index of the key and the number of comparisons made in each method.

int linear(int key, int* arr){
    for (int i=0;i<(sizeof(arr)/sizeof(int));i++){
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary(int key, int* arr){
    int n = (sizeof(arr)/sizeof(int));
    int mid = (n/2);
    int end = n-1;
    int start = 0;
    if (arr[mid] == key){
        return mid;
    } else if (arr[mid] < key){
        start = mid;
        mid = (n-start)/2;
    } else{
        end = mid;
        mid = (end-start)/2;
    }
    
}

int main(){
    int n, pos;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter n elements: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "\n----------\n";
    cout << "Type 0 for linear search and 1 for binary search: ";
    int choice;
    cin >> choice;
    cout << "\n";
    int key;
    cout << "Enter the number you want to search: ";
    cin >> key;
    cout << "\n";
    switch (choice)
    {
    case 0:
        pos = linear(key, arr);
        return 0;
    case 1:
        pos = binary(key, arr);
        return 0;
    }
    cout << "Found at " << pos;
    return 0;
}
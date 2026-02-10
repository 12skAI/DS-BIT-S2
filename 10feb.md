# 10 feb 2026
## String operations :-
a string is an array of characters. The compiler differentiate a string with a character array by the fact that string ends by a special char `\0` at the end of string.  
### counting length of a string
```cpp
int length(char* str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}
```
### copying a string into another
```cpp
void myCopy(char* dest, char* src){
    int i =0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // need to specify this to make dest a string instead of an arry of characters
}
```
> **Note**: If we define a string as `char str[100]` but initialize as `str = {'a', 'b', 'c'}`, ie., only 3 elements then position of null character `\0` will be `3` not `99`.  
### Concatenating two strings
```cpp
void conc(char* str1, char* str2){
    /*TODO*/
}
```

## Do assignments of module 1 upto program number 4.  

Q1. Write a program to read n integers and perform array insertion and deletion at a given position (0-based), displaying the array after each operation.  
```cpp

#include <iostream>
using namespace std;

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
  
Q2. Write a program to implement Linear search and Binary seach and print the index of the key and the number of comparisons made in each method. (Assuming sorted)  
```cpp

#include <iostream>
using namespace std;

int linear(int key, int* arr, int n){
    for (int i=0;i<n;i++){
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary(int key, int *arr, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;          // found
        else if (arr[mid] < key)
            low = mid + 1;       // search right half
        else
            high = mid - 1;      // search left half
    }

    return -1;
}


int main(){
    int n, pos;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter n elements in ascending order: ";
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
        pos = linear(key, arr, n);
        break;
    case 1:
        pos = binary(key, arr, n);
        break;
    }
    cout << "Found at " << pos;
    return 0;
}

```
  
Q3. Write a program to implement Bubble sort and Selection sort on an array and print the sorted array along with total comparisons and swaps.  
```cpp

```
#include <iostream>
using namespace std;

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
    cout << "Type 0 for bubble sort and 1 for insertion sort: ";
    int choice;
    cin >> choice;
    cout << "\n";
    switch (choice){
        case 0:
            bubble(arr, n);
            break;
        case 1:
            insertion(arr, n);
            break;
    }
    return 0;
}
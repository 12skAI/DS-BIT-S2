#include<iostream>
using namespace std;

int main(){
    int* arr = (int*) malloc(5*sizeof(int));
    for (int i=0;i<5;i++){
        cout << "Enter num at "<< i << "th index: ";
        cin >> arr[i];
        cout << endl;
    }
    // we now got the array of length 5
    for (int i = 0;i<5;i++){
        cout << *(arr + i) << endl;
    }
    return 0;
}
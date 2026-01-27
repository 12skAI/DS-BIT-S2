# 27 january 2026, Sem 2
### Header files
we can include header files at top of the code, for example to import `myheader` file we can write 
```cpp
#include<myheader>
```
now, in order to use functions of this header file, we need to tell the compiler each time where to look for that function, like if we need `cout` or `cin` then we have to write `std::cout` or `std::cin` which sounds as look for `cout` or `cin` in the `std` too, which is the header file.  
so writting just `cout` will tell compiler to look for `cout` in my code only, but we can use one line just after header files to get rid of writting `std::` everytime, that line is  
```cpp
using namespace std
```
### Hello world
```cpp
#include<iostream>
using namespace std;

int main(){
    cout << "Hello world!!!"<<endl;
}
```
**Note**: `endl` is like `\n` inside string.  
## Pointer
let's see an array `arr[4]`, now here `arr` is pointing to the base location (kind of) of the array,  
when we write `(arr + i)` we are saying it to look at the location of `arr[i]` element. So `(arr+i)` is actually `arr + 4*i` as location, (given size of datatype is 4 Bytes).  
and to get the element at that location we just need to add `*` in front of the location, like `*(arr + 0)` will return 10 in following code.
```cpp
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    cout << *(arr + 0);
}
```
and if we run following code,
```cpp
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    cout << arr;
}
```
we get output something like: `0x7ffe247db0f0` which is nothing but the base location of array `arr`
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4};
 // cout<<*arr;      //*arr dereferences that pointer, so it gives you the first element of the array, which is 1.


/*
 base address + sizeof datatype * index;


int arr[5] = {1, 3, 4, 7, 9};
Suppose arr starts at memory address 1000,1004,1008
sizeof(int) = 4 bytes (on most systems).
Then:
arr[0] → address = 1000 → value = 1
arr[1] → address = 1000 + (1 * 4) = 1004 → value = 3
arr[2] → address = 1000 + (2 * 4) = 1008 → value = 4
and so on.

*/
    return 0;

};
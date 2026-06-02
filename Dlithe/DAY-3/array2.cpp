#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 8, 12, 20, 25};  
    int n = 5;
    int target = 12;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
             arr[i] = -1;
            found = true;
            break;  
        }
    }
    if (found){
        cout << " is present in the array." << endl;
    }
    else{
        cout <<" NOT present in the array." << endl;
    }


        cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" " ;
    }

    return 0;
}

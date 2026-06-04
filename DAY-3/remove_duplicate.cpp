#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,2,3,3,4,4,5,5,9,10};
    int n = v.size();
    int idx = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
            v[idx++] = v[i];
        }
    }

    cout << "Total unique elements: " << idx << endl;
    for (int i = 0; i < idx; i++) {   // print only unique part
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

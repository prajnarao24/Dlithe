#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15, 6, 3};
    int n = arr.size();
    int k = 3;

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];   // initial window sum
    }

    int maxi = sum;

    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];  // slide window
        maxi = max(maxi, sum);
    }

    cout << "Maximum sum of subarray of length " << k << " is: " << maxi << endl;

    return 0;
}

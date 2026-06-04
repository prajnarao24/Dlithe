#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int triangleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());   // sort array
    int n = nums.size();
    int count = 0;

    // Fix the largest side at index k
    for (int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        while (i < j) {
            if (nums[i] + nums[j] > nums[k]) {
                // all pairs between i and j are valid
                count += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {2, 2, 3, 4};
    cout << "Number of valid triangles: " << triangleNumber(arr) << endl;
    return 0;
}

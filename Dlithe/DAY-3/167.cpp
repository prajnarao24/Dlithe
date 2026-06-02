#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int n = nums.size();

    int i = 0, j = n - 1;
    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            cout << "Indices (1-based): " << i + 1 << " and " << j + 1 << endl;
            return 0;
        }
    }

    cout << "No solution found." << endl;
    return 0;
}

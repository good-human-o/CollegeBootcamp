#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int required = target - nums[i];

        int left = i + 1;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == required) {
                return {i, mid};
            }
            else if (nums[mid] < required) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }
    return {-1, -1};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result[0] != -1) {
        cout << "Indices found: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}

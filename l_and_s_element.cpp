#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largest(vector<int>& nums) {
        int maximum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maximum) {
                maximum = nums[i];
            }
        }
        return maximum;
    }

    int smallest(vector<int>& nums) {
        int minimum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minimum) {
                minimum = nums[i];
            }
        }
        return minimum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 8, 3, 9};

    cout << "Largest number = " << sol.largest(nums) << endl;
    cout << "Smallest number = " << sol.smallest(nums) ;

    return 0;
}

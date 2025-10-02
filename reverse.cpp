#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> reverse(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    
        return nums; 
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = sol.reverse(nums);  
    cout << "Reversed array in place: ";
    for (int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

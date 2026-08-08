// Problem: Two Sum
// Topic: Arrays / Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int required = target - nums[i];

        if (mp.find(required) != mp.end()) {
            return {mp[required], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}

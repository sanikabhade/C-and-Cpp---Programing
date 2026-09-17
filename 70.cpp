class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& nums, int index, vector<int>& current) {
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        solve(nums, index + 1, current);

        current.push_back(nums[index]);
        solve(nums, index + 1, current);
        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        solve(nums, 0, current);
        return result;
    }
};
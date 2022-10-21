class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> final;
        for (int j = 0; j < nums.size(); j++)
            for (int i = j + 1; i < nums.size(); i++) {
                if (nums[j] + nums[i] == target) {
                    final.push_back(j);
                    final.push_back(i);
                }

            }
        return final;
    }

};
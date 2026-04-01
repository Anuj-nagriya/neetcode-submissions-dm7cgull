class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> S; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (S.find(complement) != S.end()) {
                return {S[complement], i};
            }

            S[nums[i]] = i;
        }

        return {}; // fallback
    }
};
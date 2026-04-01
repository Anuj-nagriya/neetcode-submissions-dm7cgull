class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> K;
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(K.find(complement) != K.end()){
                return {K[complement],i};
            }
            K[nums[i]] = i;
        }

        return {};
    }
};

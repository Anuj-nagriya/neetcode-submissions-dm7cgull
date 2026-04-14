class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int* F = &nums[0];
        int* L = &nums[nums.size()-1];
        int number = 0;
        while(F < L){
            number = *F + *L;
            if(number == target){
                result.push_back((F-&nums[0])+1);
                result.push_back((L-&nums[0])+1);
                return result;
            }

            else if(number < target){
                F++;
            }

            else if(number > target){
                L--;
            }
            
        }
        return result;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        int num =numbers[left] + numbers[right];

        vector<int> result;

        while(left < right){
            num = numbers[right] + numbers[left];
            if(num == target){
                result.push_back((left+1));
                result.push_back(right+1);
                return result;
            }

            if(num > target){
                right--;
            }

            if(num < target){
                left++;
            }
        }
    }
};

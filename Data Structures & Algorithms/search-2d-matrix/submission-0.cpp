class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int mid,high,low;
        int n = nums.size();
        int i = 0;
        while (i < n){
            high = nums[i].size()-1;
            low = 0;
            while (low <= high){
                mid = low + (high - low)/2;
                if(nums[i][mid] == target){
                    return true;
                }
                else if(nums[i][mid] < target){
                    low = mid + 1;
                    continue;
                }
                else if (nums[i][mid] > target){
                    high = mid - 1;
                    continue;
                }
            } 
            i++;
        }
        return false;
    }
};

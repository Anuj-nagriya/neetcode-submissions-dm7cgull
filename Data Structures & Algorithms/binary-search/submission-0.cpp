class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,high,low;
        high = nums.size() - 1;
        low = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if (nums[mid] < target){
                low = mid + 1;
                continue;
            }
            else if (nums[mid] > target){
                high = mid -1;
                continue;
            }
        }
        return -1;
    }
};

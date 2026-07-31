class Solution {
public:
    int findMin(vector<int> &num) {
        int left = 0;
        int right = num.size()-1;
        int mid;
        int res = num[0];
        while(left <= right){
            if(num[left] < num[right] ){
                res = min(res,num[left]);
                break;
            }
            mid = (left + right)/2;
            res = min(num[mid],res);
            if (num[mid] >= num[left]){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return res;
    }
};

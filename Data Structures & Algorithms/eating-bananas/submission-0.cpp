class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
        int ans = right;
        int mid;
        while (left <= right){
            mid = (left+right)/2;
            double hrs = 0;
            for(auto i : piles){
                hrs += ceil((double)i/mid);
            }

            if(hrs <= h){
                ans = mid;
                right = mid -1;
            }else{
                left = mid +1;
            }
        }
        return ans;

    }
};

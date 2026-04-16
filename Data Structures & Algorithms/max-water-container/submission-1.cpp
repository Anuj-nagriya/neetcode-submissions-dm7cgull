class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max_Area= 0;
        int right = height.size()-1;
        int left = 0;
        int area_2 =0;
        while(right != left){
            int h = min(height[left],height[right]);
            int distance = right-left;
            int area = distance * h;
            Max_Area = max(area,Max_Area);

            if(height[right] > height[left]){
                left++;
            }else{
                right--;
            }
        }
        return Max_Area;
    }
};

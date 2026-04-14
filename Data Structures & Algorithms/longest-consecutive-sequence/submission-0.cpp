class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int length = 0;
        
        for(auto i : s){
            int current;
            int count = 1;
            if(s.find(i-1) == s.end()){
                current = i;
                count = 1;
            while(s.find(current+1) != s.end()){
                count++;
                current++;
            }
            }
            length = max(count,length);
        }

        return length;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int result = 0;
        
        for(auto i : set){
            int sequence = 0;
            int current = i;
            if(set.find(current-1) == set.end()){
                sequence = 1;
                while(set.find(current+1) != set.end()){
                    sequence++;
                    current++;
                }
            }
            result = max(sequence,result);
        }
        return result;
    } 
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int longest_sequence = 0;
       unordered_set<int> set(nums.begin(),nums.end()); 

       for(auto i : set){
        int current = i;
        int length = 0;
            if(set.find(i-1) == set.end()){
                length = 1;
                while(set.find(current+1) != set.end()){
                    length++;
                    current++;
                }
            }
            longest_sequence = max(longest_sequence,length);
        }
        return longest_sequence;
    }
};

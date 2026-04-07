class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> K;
        for(auto i : nums){
            if(K.find(i) != K.end()){
                return true;
            }
            K.insert(i);
        }
        return false;
    }
};
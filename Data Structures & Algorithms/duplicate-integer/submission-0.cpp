class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> S;
        for(auto i = nums.begin(); i != nums.end(); i++){
            if(S.find(*i) != S.end()){
                return true;
            }else{
                S.insert(*i);
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mp;
        for(auto i : strs){
            string key = i;
            sort(key.begin(),key.end());
            mp[key].push_back(i);
        }
        vector<vector<string>> result;
        for(auto& k : mp){
            result.push_back(k.second);
        }
        return result;
    }
};

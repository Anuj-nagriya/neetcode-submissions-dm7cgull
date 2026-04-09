class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;
        for(auto i : strs){
            string key = i;
            sort(key.begin(),key.end());
            mp[key].push_back(i);
        }

        for(auto i : mp){
            result.push_back(i.second);
        }
        return result;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        priority_queue<pair<int,int>> max_heap;
        for(auto i : mp){
            max_heap.push({i.second,i.first});
        }
        vector<int> resultSet;
        for(int i = 0; i<k;i++){
            auto k = max_heap.top();
            resultSet.push_back(k.second);
            max_heap.pop();
        }
        return resultSet;
    }
};

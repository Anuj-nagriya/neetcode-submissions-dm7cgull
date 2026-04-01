class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        vector<int> Sort;
        for(int i : nums){
            mp[i]++;
            Sort.push_back(i);
        }
        priority_queue <pair<int,int>> Max_heap;
        for(auto i : mp){
            Max_heap.push({i.second,i.first});
        }
        vector<int> result;
        while(k--){
            result.push_back(Max_heap.top().second);
            Max_heap.pop();
        }
        return result;
    }
};

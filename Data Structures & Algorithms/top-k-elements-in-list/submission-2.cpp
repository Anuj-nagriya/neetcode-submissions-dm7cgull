class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(auto i : nums){
            hash[i]++;
        }
        priority_queue<pair<int,int>> Max_heap;
        for(auto i : hash){
            Max_heap.push({i.second,i.first});
        }
        vector<int> result;
        for(int i =0; i<k; i++){
            auto pair = Max_heap.top();
            result.push_back(pair.second);
            Max_heap.pop();
        }
        return result;
    }
};

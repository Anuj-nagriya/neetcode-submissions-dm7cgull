class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> Map;

        for(auto i : nums){
            Map[i]++;
        }

        priority_queue<pair<int,int>> Max_Heap;

        for(auto i : Map){
            Max_Heap.push({i.second,i.first});
        }

        vector<int> result;
        for(int i = 0; i<k;i++){
            auto k = Max_Heap.top();
            result.push_back(k.second);
            Max_Heap.pop();
        }

        return result;    
    }
};

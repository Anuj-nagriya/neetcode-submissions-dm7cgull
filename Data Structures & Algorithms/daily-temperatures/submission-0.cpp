class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> result(temp.size(),0);
        stack<int> stk;

        for(int i = 0; i<temp.size();i++){
            while(!stk.empty() && temp[i] > temp[stk.top()]){
                int prev = stk.top();
                result[prev] = i - prev;
                stk.pop();
            }
            stk.push(i);
        }

        return result;
    }
};

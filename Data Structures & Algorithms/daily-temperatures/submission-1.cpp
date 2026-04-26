class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<pair<int,int>> abc;   
        vector<int> newl(temperatures.size(), 0);

        int p = temperatures.size();

        while (p > 0)
        {
            p--;

            
            if (abc.empty())
            {
                newl[p] = 0;
                abc.push_back({temperatures[p], p});
                continue;
            }

         
            while (!abc.empty() && temperatures[p] >= abc.back().first)
            {
                abc.pop_back();
            }

          
            if (abc.empty())
            {
                newl[p] = 0;
            }
            else
            {
               
                newl[p] = abc.back().second - p;
            }

          
            abc.push_back({temperatures[p], p});
        }

        return newl;
    }
};
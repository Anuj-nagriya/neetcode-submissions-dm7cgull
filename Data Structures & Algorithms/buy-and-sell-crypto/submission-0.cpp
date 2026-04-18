class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_price = prices[0];
        int max_profit=0;

        for(int i = 0; i<prices.size(); i++){
            if(current_price > prices[i]){
                current_price = prices[i];
            }else{
                int profit = prices[i] - current_price;
                max_profit = max(profit,max_profit);
            }
        }
        return max_profit;
    }
};

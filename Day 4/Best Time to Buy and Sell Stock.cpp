class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_index = 0;
        int result = 0;
        int profit;
        for(int i =1; i <prices.size();i++){
            profit = prices[i] - prices[min_index];
            result = max(result, profit);
            if (prices[i] < prices[min_index]){
                min_index = i;
            }
        }
        return result;
    }
};

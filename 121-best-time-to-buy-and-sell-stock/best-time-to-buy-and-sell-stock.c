int maxProfit(int* prices, int pricesSize) {
    int buy = INT_MAX, profit = 0, max = 0;
    for(int i = 0; i< pricesSize; i++) {
        if(prices[i] <= buy) {
            buy = prices[i];
        } else {
            profit = prices[i] - buy;
            if(profit > max) {
                max = profit;
            }
        }
        
    }
    return max;
}
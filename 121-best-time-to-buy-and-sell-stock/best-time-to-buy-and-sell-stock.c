int maxProfit(int* prices, int pricesSize) {
    int sell = 0, buy = INT_MAX;
    int profit = 0, max = INT_MIN;
    for(int i = 0; i< pricesSize; i++) {
        if(prices[i] <= buy) {
            buy = prices[i];
        } else {
            sell = prices[i];
            profit = sell - buy;
            if(profit > max) {
                max = profit;
            }
        }
        
    }
    return sell ? max : 0;
}
int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    int result=0;
    int profit=0;
    
    for(int i=0;i<pricesSize;i++){
        if(prices[i]-min>profit) profit = prices[i]-min;
        if(prices[i]<min) min = prices[i];     
    }
    
    return profit;
}
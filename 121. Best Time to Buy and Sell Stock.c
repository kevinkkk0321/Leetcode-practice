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

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int min=prices[0];
        int result=0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]-min > result) result = prices[i]-min;
            if(prices[i]< min) min = prices[i];
        }
        return result;
    }
};
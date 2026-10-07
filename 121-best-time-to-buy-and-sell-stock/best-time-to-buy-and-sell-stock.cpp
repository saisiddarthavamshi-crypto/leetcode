class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int currprofit=prices[i]-min;
            if(currprofit>profit){
                profit=currprofit;
            }
        }
    
     return profit;
    }
};
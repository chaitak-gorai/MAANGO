class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit[n];
        int min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<=min){
                min=prices[i];
                
            }
            profit[i]=prices[i]-min;
        }
        int max=profit[0];
        for(int i=0;i<n;i++){
            if(profit[i]>=max){
                max=profit[i];
            }
        }
        if(max<=0){
            return 0;
        }else{
            return max;
        }
    }
};
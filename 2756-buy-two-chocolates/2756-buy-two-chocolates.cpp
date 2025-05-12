class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int sum=0;
       sort(prices.begin(),prices.end());
       for(int i=0;i<2;i++){
        sum+=prices[i];
       } 
       if(sum<=money){
        return money-sum;
       }else{
        return money;
       }
      return -1; 
    }
};
// Problem: Leetcode 121: Best Time to Buy and Sell Stock
// Topic: Arrays
// Pattern: Greedy
// Difficulty: Easy

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int Profit = 0;
        for(int i = 1; i<= prices.size()-1; i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else {
                Profit = prices[i] - minPrice;
            }
            if (Profit > maxProfit) {
        maxProfit = Profit;
            }
        }
        return maxProfit;
    }
};

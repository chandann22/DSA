// Problem: 1281. Subtract the Product and Sum of Digits of an Integer
// Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Topic: Basics
// Pattern: Math
// Difficulty: Easy
class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit;
        int sum=0;
        int product=1;
        int result;
        while(n>0){
            digit = n%10;
            n=n/10;
            sum += digit;
            product *= digit;
        }
        return product - sum;
    }
};

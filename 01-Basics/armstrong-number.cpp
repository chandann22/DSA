// Problem: GFG: Armstrong Numbers
// Topic: Basics
// Pattern: Math
// Difficulty: Easy

class Solution {
  public:
    bool armstrongNumber(int n) {
        int result = 0;
        int org = n;
        while(n>0){
        int d = n%10;
        n = n/10;
        result = result + (d*d*d);
        }
        return result == org;
    }
};

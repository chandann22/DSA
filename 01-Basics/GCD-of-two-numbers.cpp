// Problem: GFG: GCG of two Numbers
// Topic: Basics
// Pattern: Euclidean Algorithm
// Difficulty: Easy

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b!=0){
            int r = a%b;
            a=b;
            b=r;
        }
        return a;
    }
};

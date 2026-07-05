// Problem: LeetCode 69. Sqrt(x)
// Topic: Basics
// Pattern: Math
// Difficulty: Easy

class Solution {
public:
    int mySqrt(int x) {
        int result;
        for(long long i=0; i*i<=x; i++){
            result = i;
        }
        return result;
    }
};

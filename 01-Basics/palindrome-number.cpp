// Problem: 9. Palindrome Number
// Topic: Basics
// Pattern: Math
// Difficulty: Easy

class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        int result = 0;
        int original = x;
        if (x < 0) {
            return false;
        }
        while (x > 0) {
            digit = x % 10;
            x = x / 10;
            if (result > INT_MAX / 10 || result < INT_MIN / 10) {
                return false;
            }
            result = (result * 10) + digit;
        }
        return result == original;
    }
};

// Problem: Leetcode 125: Valid Palindrome
// Topic: Strings
// Pattern: Brute Force
// Difficulty: Easy

class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i<s.size(); i++){
            if(isalnum(s[i])){
                temp += tolower(s[i]);
            }
        }
        string rev = temp;
        reverse(rev.begin(), rev.end());
        if(rev == temp){
            return true;
        }
        return false;
    }
};

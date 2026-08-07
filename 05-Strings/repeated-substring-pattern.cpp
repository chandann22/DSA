// Problem: Leetcode 459: Repeated Substring Pattern
// Topic: Strings
// Pattern: Brute Force
// Difficulty: Easy

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len = 1; len<=n/2; len++){
            if(n%len != 0){
                continue;
            }
            string pattern = s.substr(0, len);
            string temp = "";
            int times = n/len;
            for(int i = 0; i<times; i++){
                temp += pattern;
            }
            if(temp == s){
                return true;
            }
        }
        return false;
    }
};

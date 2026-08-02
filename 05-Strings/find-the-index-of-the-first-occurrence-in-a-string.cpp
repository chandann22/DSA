// Problem: Leetcode 28: Find the Index of the First Occurrence in a String
// Topic: Strings
// Pattern: String Matching
// Difficulty: Easy

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;
        for(int i = 0; i<= haystack.size()-needle.size(); i++){
            int j = 0;
            while(j<needle.size() && haystack[j+i]==needle[j]){
                j++;
            }
            if(j == needle.size()){
                return i;
            }
        }
        return -1;
    }
};

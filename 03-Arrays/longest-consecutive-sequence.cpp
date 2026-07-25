// Problem: Leetcode 128: Longest Consecutive Sequence
// Topic: Arrays
// Pattern: Traversal
// Difficulty: Easy

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int count = 1;
        int longest = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i<= nums.size()-1; i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                longest = max(longest, count);
                count = 1;
            }
        }
        longest = max(longest, count);
        return longest;
    }
};

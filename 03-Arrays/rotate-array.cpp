// Problem: Leetcode 189: Rotate Array
// Topic: Arrays
// Pattern: Reversal Algorithm
// Difficulty: Medium

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};

// Problem: Leetcode 53: Maximum Subarray
// Topic: Arrays
// Pattern: Kadane's Algorithm
// Difficulty: Medium

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i< nums.size(); i++){
            currentSum = max(nums[i], currentSum+nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

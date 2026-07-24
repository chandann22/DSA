// Problem: Leetcode 485: Max Consecutive Ones
// Topic: Arrays
// Pattern: Sliding Window
// Difficulty: Easy

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i<=nums.size()-1; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            maxCount = max(maxCount , count);
        }
        return maxCount;
    }
};

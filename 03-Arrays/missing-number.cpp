// Problem: Leetcode 268: Move Zeroes
// Topic: Arrays
// Pattern: Math
// Difficulty: Easy

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i<= nums.size()-1; i++){
            if(nums[i]!= i){
                return i;
            }
        }
        return nums.size();
    }
};

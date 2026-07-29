// Problem: Leetcode 217: Contains Duplicate
// Topic: Arrays
// Pattern: Hashing
// Difficulty: Easy

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i<=nums.size()-1; i++){
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};

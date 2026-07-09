// Problem: Leetcode 1752: Check if Array Is Sorted and Rotated
// Topic: Arrays
// Pattern: Traversal
// Difficulty: Easy

class Solution {
public:
    bool check(vector<int>& nums) {
        int dec=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                dec++;
            }
        }
        return dec <= 1;
    }
};

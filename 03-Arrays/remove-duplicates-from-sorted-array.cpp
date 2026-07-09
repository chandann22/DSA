// Problem: Leetcode 26: Remove Duplicates from Sorted Array
// Topic: Arrays
// Pattern: Two Pointers
// Difficulty: Easy

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i =1; i<nums.size(); i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};

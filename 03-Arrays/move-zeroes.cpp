// Problem: Leetcode 283: Move Zeroes
// Topic: Arrays
// Pattern: Two Pointers
// Difficulty: Easy

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<=nums.size()-1; i++){
            for(int j=i+1; j<=nums.size()-1; j++){
                if(nums[i]==0){
                    swap(nums[i], nums[j]);
                }
                    else if(nums[i]==nums[j]){
                        j++;
                    }
            }
        }
    }
};

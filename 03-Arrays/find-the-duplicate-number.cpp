// Problem: Leetcode 287: Find the Duplicate Number
// Topic: Arrays
// Pattern: Binary Search
// Difficulty: Medium

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-1;
        while(left<right){
            int mid = (left+right)/2;
            int count = 0;
            for(int i = 0; i<=nums.size()-1; i++){
                if(nums[i]<=mid){
                    count++;
                }
            }
            if(count>mid){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};

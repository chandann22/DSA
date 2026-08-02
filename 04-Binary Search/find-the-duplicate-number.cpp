// Problem: Leetcode 287: Find the Duplicate Number
// Topic: Binary Search
// Pattern: Binary Search
// Difficulty: Medium

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-1;
        while(left<right){
            int count = 0;
            int mid = (left+right)/2;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]<=mid){
                    count++;
                }
            }
            if(count>mid){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};

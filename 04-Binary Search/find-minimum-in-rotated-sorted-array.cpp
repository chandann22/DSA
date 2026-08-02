// Problem: Leetcode 153: Find Minimum in Rotated Sorted Array
// Topic: Binary Search
// Pattern: Binary Search
// Difficulty: Medium

class Solution {
public:
    int findMin(vector<int>& nums) {
        int currentMin = nums[nums.size()-1];
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[left]<=nums[mid]){
                currentMin = min(currentMin, nums[left]);
                left = mid + 1;
            }
            else{
                currentMin = min(currentMin, nums[mid]);
                right = mid - 1;
            }
        }
        return currentMin;
    }
};

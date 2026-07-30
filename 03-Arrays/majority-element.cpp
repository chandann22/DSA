// Problem: Leetcode 169: Majority Element
// Topic: Arrays
// Pattern: Moore's Voting Algorithm
// Difficulty: Easy

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int ans = nums[0];
        int maxcount = 1;
        for(int i = 1; i<=nums.size()-1; i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            if(count>maxcount){
                maxcount = count;
                ans = nums[i];
            }
        }
        return ans;
    }
};

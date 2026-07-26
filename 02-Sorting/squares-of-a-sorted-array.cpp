// Problem: LeetCode 977. Squares of a Sorted Array
// Topic: Sorting
// Pattern: Two Pointers
// Difficulty: Easy

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i<=nums.size()-1; i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

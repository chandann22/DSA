// Problem: LeetCode 75. Sort Colors
// Topic: Sorting
// Pattern: Dutch National Flag
// Difficulty: Medium

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};

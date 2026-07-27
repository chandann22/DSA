// Problem: Leetcode 1539: Kth Missing Positive Number
// Topic: Binary Search
// Pattern: Binary Search
// Difficulty: Easy

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0;
        int right = arr.size()-1;
        int missing = 0;
        while(left<=right){
            int mid = (left+right)/2;
            missing = arr[mid] - (mid+1);
            if(missing<k){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return left+k;
    }
};

// Problem: GFG: largest Element in an Array
// Topic: Arrays
// Pattern: Traversal
// Difficulty: Easy

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest=0;
        for(int i=0; i<=arr.size()-1; i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }
};

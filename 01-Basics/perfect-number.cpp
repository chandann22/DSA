// Problem: 507. Perfect Number
// Topic: Basics
// Pattern: Math
// Difficulty: Easy

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int org = num;
        int sum=0;
        for(int i=1; i<num; i++){
            if(num%i==0){
                sum = sum+i;
            }
        }
        return sum==org;
    }
};

// Problem: Leetcode 12: Integer to Roman 
// Topic: Strings
// Pattern: Greedy
// Difficulty: Medium

class Solution {
public:
    string intToRoman(int num) {
        int integer[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string result = "";
        for(int i=0;i<=12;i++){
            int x = num/integer[i];
            num = num % integer[i];
            for(int j=0;j<x;j++){
                result = result + roman[i];
            }
        }
        return result;
    }
};

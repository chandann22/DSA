// Problem: Leetcode 6: Zigzag Conversion
// Topic: Strings
// Pattern: Simulation
// Difficulty: Medium

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >=s.size()){
            return s;
        }
        vector<string> rows(numRows);
        int currentrow = 0;
        bool down = false;
        for(int i = 0; i<s.size(); i++){
            rows[currentrow] += s[i];
            if(currentrow == 0 || currentrow == numRows - 1){
                down = !down;
            }
            if(down){
                currentrow++;
            }
            else{
                currentrow--;
            }
        }
        string ans = "";
        for(int i = 0; i<numRows; i++){
            ans += rows[i];
        }
        return ans;
    }
};

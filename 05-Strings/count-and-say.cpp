// Problem: Leetcode 38: Count and Say
// Topic: Strings
// Pattern: Simulation
// Difficulty: Medium

class Solution {
public:
    string countAndSay(int n) {
        string say = "1";
        for(int j = 1; j<n; j++){
            int i= 0;
            string ans = "";
            while(i<say.size()){
                int count = 1;
                while(i+1<say.size() && say[i]==say[i+1]){
                    count++;
                    i++;
                }
                ans += to_string(count);
                ans += say[i];
                i++;
            }
            say = ans;
        }
        return say;
    }
};

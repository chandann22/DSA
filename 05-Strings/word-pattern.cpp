// Problem: Leetcode 290: Word Pattern
// Topic: Strings
// Pattern: Hashing
// Difficulty: Easy

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()){
            return false;
        }
        for(int i = 0; i<pattern.size(); i++){
            if(map1.count(pattern[i])){
                if(map1[pattern[i]] != words[i]){
                    return false;
                }
            }
            else{
                map1[pattern[i]] = words[i];
            }
            if(map2.count(words[i])){
                if(map2[words[i]] != pattern[i]){
                    return false;
                }
            }
            else{
                map2[words[i]] = pattern[i];
            }
        }
        return true;
    }
};

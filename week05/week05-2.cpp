///week05-2.cpp Leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(char c : s){
            if(isupper(c)) c = tolower(c);
            ans +=c;
        }
        return ans;
    }
};
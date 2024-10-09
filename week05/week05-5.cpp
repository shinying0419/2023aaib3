//week05-5.cpp Leetcode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //可將字串string 變成cout的iostream
        string word;
        while( ss>>word){ //一直讀，讀完才離開

        }
        return word.length(); //最後殘留的那個字
    }
};
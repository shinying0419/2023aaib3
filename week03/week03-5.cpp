class Solution {
public:
    //abcabcabc
    //abcabcabcabcabc
    // bcabcabcabcabcab 找有沒有 abcabcabc
    bool repeatedSubstringPattern(string s) {
        //這題我沒甚麼頭緒，所以看了Solutions 裡別人的解答
        //很多人使用 s+s 在剪掉頭尾
        //然後把s拿去做對比， 如果有出現，表示repeated 的 patern
        string s2 = s+s;
        int N = s2.length();
        return s2.substr(1,N-2).find(s) !=string::npos;
        
    }
};
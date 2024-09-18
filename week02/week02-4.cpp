//Leetcode 389. Find the Difference (Easy)
//左邊s、右邊t，找出左右不同、多出來的那個字母(學習計畫第2題) week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //陣列超大，都設為0
        for(char c : s){ //針對左邊的字串s 裡面的每個字c
            H[c]++; //把 Histogram統計圖資料 H[c] 加1 多1次
        }
        for(char c : t){
            H[c]--;
            if(H[c]<0) return c;
        }
        return 0;
    }
};
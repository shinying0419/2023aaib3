///week05-2.c Leetcode 709. To Lower Case
char* toLowerCase(char* s) {
    for(int i=0;s[i]!=0;i++){ //字串的迴圈 中間的s[i]!=0
        char c = s[i]; //多此一舉，取出c
        if(isupper(c)) c=tolower(c);
        s[i] = c; //多此一舉，塞回s[i]
    }
    return s;
}
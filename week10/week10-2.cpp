///week10-2.cpp 練習 class

#include <iostream>
using namespace std;

///你輸入 class Cat 再加 大括號, CodeBlocks 它幫你加好下括號、分號
class Mouse{
public:
    void print(){
        cout<<"I am a mouse,叫叫\n";
    }
};

class Cat{
public:
    void print(){
        cout<<"I am a Cat,meow meow\n";
    }
};

int main(){
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat1.print();
}

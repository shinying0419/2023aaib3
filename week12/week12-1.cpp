///Week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了Cat的名字
using namespace std;

///struct Node {}; ///都有分號結尾 c語言的結構
///class Cat{}; ///之前幾周，都教過，c++更強大

struct Node {
    int val;
};

class Cat{
public:
    string name; ///貓的名字， 之前幾周教過
};

int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}

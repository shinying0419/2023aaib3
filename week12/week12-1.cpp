///Week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���FCat���W�r
using namespace std;

///struct Node {}; ///������������ c�y�������c
///class Cat{}; ///���e�X�P�A���йL�Ac++��j�j

struct Node {
    int val;
};

class Cat{
public:
    string name; ///�ߪ��W�r�A ���e�X�P�йL
};

int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}

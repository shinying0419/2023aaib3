///week03-1.cpp
///�]�� range-based for �j�� �����b C++11 (2011����)�~���
///�p�G�ϥ� c++98(1998�~��) �|�L�k�sĶ�B����|�X���B�j��X����
///CodeBlocks 17.12 �� Seting-Compiler �Ŀ�ĤG�� -std=c++11
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c:s){
        if(c!='2') cout << c;
    }
    return 0;
}

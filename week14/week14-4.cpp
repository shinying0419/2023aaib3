//week14-4.cpp UVA10190
#include <iostream>
using namespace std;

int main()
{
	int a,b;//Step01: Input
	while( cin>> a>> b){
		while(a>0){ //Step03
			cout << a <<" ";
			a=a/b;
		}
		
		cout << "Boring!\n";
	}//Step02: Output
}
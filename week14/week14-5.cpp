//week14-5.cpp UVA10190
#include <iostream>
using namespace std;

int main()
{
	int a,b;//Step01: Input
	while( cin>> a>> b){
		int bad=0,backup=a;
		if(b==1){
			cout<<"Boring!\n";
			continue;
		}
		while(a>0){ //Step03
			//cout << a <<" ";
			if(a!=1 && a%b >0) bad=1;
			a=a/b;
		}
		if(bad==1) cout << "Boring!\n";
		else{
			a=backup;
			while(a>1){
				cout << a << " ";
				a=a/b;
			}
			cout << "1\n";
		}
	}//Step02: Output
}
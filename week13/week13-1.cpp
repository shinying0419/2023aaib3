//week13-1.cpp
#include <iostream>
using namespace std;
int heiper(int a,int b){ //Step03: helper() function
	return 3;
}
int main()
{
	int a,b; //Step01: Input
	while( cin>> a>> b){
		if(a==0 && b==0) break;
		
		int ans=helper(a,b);
		
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout<<"1 carry operation.\n";
		else cout<<" carry operations.\n";
	} //Step02: Output
}
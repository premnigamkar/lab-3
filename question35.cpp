#include <iostream>
using namespace std;

int main() {
	int n,f,sod;
	cout<<"enter a number\n";
	cin>>n;
	
	while(n>0)
	{
		f=n%10;
		n=n/10;
		sod=sod+f;            
	}
	cout<<"sum of the digits is "<<sod;

}	

#include <iostream>
using namespace std;

int main() {
	int n,i,cp,f,s;
	cout<<"enter a number\n";
	cin>>n;
	cp=n%10;
	while(n>10)
	{
		f=n%10;
        n=n/10;	
	}
	s=cp+f;
	cout<<"The sum of the first and last digit is "<<s;
	return 0;
}

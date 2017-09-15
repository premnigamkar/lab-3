#include <iostream>
using namespace std;

int main() {
	int n,f,pod=1;
	cout<<"enter a number\n";
	cin>>n;
	while(n>0)
	{
		f=n%10;
		n=n/10;
		pod=pod*f;            
	}
	cout<<"product of the digits is "<<pod;

}	

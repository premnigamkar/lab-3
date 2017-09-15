#include <iostream>
using namespace std;

int main() {
	int n,i;
	cout<<"Enter a number\n";
	cin>>n;
	while(n>0)
	{
		n=n/10;
		i++;
	}
	cout<<"The digits in a given number is "<<i;
	return 0;
}

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,i;
	cout<<"enter any number\n";
	cin>>n;
	i=1;
	while(i<=10)
	{
	  cout<<n<<'*'<<i<<'='<<n*i<<"\n";
	  i++;
	}
	return 0;
}

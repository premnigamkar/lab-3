#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int f,l,n,i=0,swap;
   cout<<"enter a number";
   cin>>n;
   swap=p;
   l=n%10;
   while(n!=0)
   {
     f=n%10;
     n=n/10;
i++;
   }
swap=swap-l+f;
swap=swap-(f*pow(10,i-1))+(l*pow(10,i-1));
cout<<"\n The swapped number is "<<swap;
  return 0;
}




#include<iostream>
using namespace std;
int main()
{ 
   int a;
   cout<<"Enter a number\n";
   cin>>a;
   if(a%5==0&&a%11==0)
   {
     cout<<a<<"THe number is divisble both 5 and 11.";
   }
   else
   {
     cout<<a<<"The number is not divisble by 5 and 11.";
   }
   return 0;
}


#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter any two numbers \n";
   cin>>a>>b;
   if(a<b)
   {
     cout<<"The maximum number of the two numbers is "<<b<<".";
   }
   else
   {   
     cout<<"The maximum number of the two numbers is "<<a<<".";
   }
   return 0;
}

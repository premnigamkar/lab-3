#include<iostream>
using namespace std;
int main()
{
   float a,b,c;
   cout<<"Enter three sides";
   cin>>a>>b>>c;
   if((a+b>c)&&(b+c>a)&&(a+c>b))
   {
    cout<<"The triangle is valid for the given sides."<<"\n"<<a<<"\n"<<b<<"\n"<<c;
   }
   else
   {
    cout<<"The triangle is not valid.";
   }
   return 0;
}

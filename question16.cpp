#include<iostream>
using namespace std;
int main()
{
   float a,b,c;
   cout<<"Enter three sides of a triangle\n";
   cin>>a>>b>>c;
   if(a==b&&b==c)
     cout<<"The given triangle is equilateral.";
   else if(a==b||b==c||a==c)
     cout<<"The given triangle is isoceles.";
   else
     cout<<"The given triangle is scalene.";
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
   int p,c,b,m,co;
   float per;
   cout<<"Enter marks of five subjects-physics,chemistry,biology,mathematics,computer\n";
   cin>>p>>c>>b>>m>>co;
   per=((p+c+b+m+co)*100)/500;
   if(per>=90)
     cout<<"A";
   else if(per>=80)
     cout<<"B";
   else if(per>=70)
     cout<<"C";
   else if(per>=60)
     cout<<"D";
   else if(per>=40)
     cout<<"E";
   else
     cout<<"F";
   return 0;
} 

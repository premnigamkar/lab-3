#include<iostream>
using namespace std;
int main()
{
   int no.;
   cout<<"Enter a month number\n";
   cin>>mn;
   if(no.==1||no.==3||no.==5||no.==7||no.==8||no.==10||no.==12)
   {
     cout<<"The number of days in "<<mn<<" month is 31.";
   }
   else if(no.==4||no.==6||no.==9||no.==11)
   { 
     cout<<"The number of days in "<<mn<<" month is 30.";
   }
   else if(no.==2)
   { 
     cout<<"The month has 28 or 29 days.";
   }
   else
   {
     cout<<"Error";
   }
   return 0;
}


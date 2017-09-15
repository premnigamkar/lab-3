#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter an alphabet\n";
   cin>>c;
   if(c>='a'&&c<='z')
   {
     cout<<c<<"Given alphabet is in lowecase.";
   }
   else
   { 
     cout<<c<<"Given alphabet is in uppercase.";
   }
   return 0;
}

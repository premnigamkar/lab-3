#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter a character\n";
   cin>>c;
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   {
     cout<<c<<"Given character is an alaphabet.";
   }
   else
   {
     cout<<c<<"Given character is not an alphabet.";
   }
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter an alphabet\n";
   cin>>c;
   if((c=='a'||c=='A')||(c=='e'||c=='E')||(c=='i'||c=='I')||(c=='o'||c=='O')||(c=='u'||c=='U'))
   {
     cout<<c<<"Given vowel is a vowel.";
   }
   else
   {
     cout<<c<<"Given alphabet is a consonant.";
   }
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"Enter a character\n";
  cin>>c;

  if(c>='0'&&c<='9')
  {
     cout<<c<<"Given character is a digit.";
  }
  else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
  {
     cout<<c<<"Given is an alphabet.";
  }
  else
  {
     cout<<c<<"Given is a special character.";
  }
  return 0;
}

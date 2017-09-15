#include<iostream>
using namespace std;
int main()
{
  int y;
  cout<<"Enter the year\n";
  cin>>y;
  if(y%4==0&&y%100!=0)
  { 
    cout<<y<<"Given year is a leap year.";
  }
  else if(y%400==0)
  {
    cout<<y<<"Given year is a leap year.";
  }
  else if(y%100==0)
  {
    cout<<y<<"Given year is not a leap year.";
  }
  else
  {
    cout<<y<<"Given year is not aleap year.";
  }
  return 0;
} 
 

#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"Enter the three angles of a triangle\n";
  cin>>a>>b>>c;
  if(a+b+c==180)
  { 
    cout<<"The given triangle is valid.";
  }
  else
  {
    cout<<"A triangle can't be formed.";
  }
  return 0;
}

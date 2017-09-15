#include<iostream>
using namespace std;
int main()
{
  float cp,sp,p,l;
  cout<<"Enter the cost price and selling price of a commodity\n";
  cin>>cp>>sp;
  if(cp>sp)
  { 
    l=cp-sp;
    cout<<"The loss is "<<l;
  }
  else if(cp<sp)
  {
    p=sp-cp;
    cout<<"The profit is "<<p;
  }
  return 0;
}

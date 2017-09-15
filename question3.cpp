#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter a number\n";
    cin>>a;
    if(a>0)
    { 
      cout<<a<<"the number is positive.";
    }
    else if(a<0)
    {
      cout<<a<<"the number is negative.";
    }
    else
    {
      cout<<a<<"the number is zero.";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter any three numbers \n";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    { 
      cout<<"The maximum of three numbers is "<<a<<".";
    }
    else if(b>c&&b>a)
    {
      cout<<"The maximum of three numbers is "<<b<<".";
    }
    else
    {
      cout<<"The maximum of three numbers is "<<c<<".";
    }
    return 0;
}

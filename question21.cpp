#include <iostream>
using namespace std;

int main() {
    int u=0,a=0,surch=0,tot=0;
    cout<<"Enter the units of electricity consumed";
    cin>>u;
    if(u<=50)
        a=u*0.50;
    else if(u<=150)
        a=25+((u-50)*0.75);
    else if(u<=250)
        a=100+((u-150)*1.2);
    else
        a=220+((u-250)*1.5);
    surch=a*0.2;
    tot=a+surch;
    cout<<"The electricity bill is "<<tot;
    return 0;
}

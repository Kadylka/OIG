#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float u, x;
    cin>>u>>x;
    float p=((u*u*1))/(x*20*(1-x));
    p=p*1000;
    p=round(p);
    cout<<p/1000;
    return 0;
}

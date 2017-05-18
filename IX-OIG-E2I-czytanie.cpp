#include<iostream>
using namespace std;
int main()
{
    int n, a=0;
    cin>>n;
    int t[n];
    for(int i=0; i<n; i++)
    cin>>t[i];
    for(int i=0; i<n; i++)
    {
        if(t[i]>10&&t[i]%10!=0)
            a+=t[i]/10;
        if(t[i]>10&&t[i]%10==0)
            a+=(t[i]/10)-1;
    }
    cout<<a;
    return 0;
}

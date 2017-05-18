#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,a,b;
    long long int s=0;
    cin>>n>>a;
    int t[n];
    for(int i=0; i<n; i++)
    {
        cin>>b;
        t[i]=b%a;
    }
    sort(t, t+n);
    for(int i=1; i<n-1; i++)
    {
        if(t[i]!=t[i+1] && t[i]!=t[i-1])
        {
            s=s+1;
        }
 
    }
 
    if(t[0]!=t[1]) s=s+1;
 
    if(t[n-2]!=t[n-1]) s=s+1;
    cout<<s;
    return 0;
}		

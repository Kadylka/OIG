#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, p=0;
    cin>>n;
    p=n;
    char t[n], a[p];
    for(int i=0; i<n; i++)
        cin>>t[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j==i; j++)
            a[j]=t[i];
    }
    sort(t, t+n);
    char mx=t[n-1];
    for(int j=0; j<n; j++)
    {
 
        if(a[j]==mx||a[j]>a[j+1])
        {
           for(int k=j; k<n; k++)
        {
            a[k]=a[k+1];
        }
        p=1;
        }
        if(p==1)
        {
            for(int k=0; k<n-1; k++)
            cout<<a[k];
            cout<<endl;
            break;
        }
 
    }
    return 0;
}

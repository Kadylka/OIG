#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int t[a];
    for(int i=0; i<a; i++)
    {
        string b;
        cin>>b;
        t[i]=b.length();
    }
    sort(t,t+a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<t[i]; j++)
        {
          cout<<"O";
        }
        cout<<endl;
    }
 
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int t[4];
int main()
{
	for(int i=0; i<5; i++)
	{
		t[i]=i+1;
	}
 
    long long int n;
    int l=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char a;
        cin>>a;
        long long int b;
        cin>>b;
        if(b%2==1)
        {
           switch(a)
            {
                case 'A': swap (t[0], t[1]); break;
                case 'B': swap (t[0], t[2]); break;
                case 'C': swap (t[0], t[3]); break;
                case 'D': swap (t[0], t[4]); break;
                case 'E': swap (t[1], t[2]); break;
                case 'F': swap (t[1], t[3]); break;
                case 'G': swap (t[1], t[4]); break;
                case 'H': swap (t[2], t[3]); break;
                case 'I': swap (t[2], t[4]); break;
                case 'J': swap (t[3], t[4]); break;
            }
        }
    }
 
    for(int i=0; i<5; i++)
    {
        if(t[i]==true)
        {
            l=i+1;
        }
    }
    cout<<l;
    return 0;
}		

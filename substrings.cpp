#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n;
        cin>>n;
        char a;
        ll b=0;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            if(a=='1')
            b+=1;
        }
        b=(b*(b+1))/2;
        cout<<b<<endl;


    return 0;
}

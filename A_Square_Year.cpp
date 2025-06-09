#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int res=sqrt(n);
        if(pow(res,2)==n)
        {
            cout<<0<<" "<<res<<endl;
        }
        else cout<<-1<<endl;
    }
}
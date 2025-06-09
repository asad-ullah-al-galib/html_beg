#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m,a,b; cin>>n>>m>>a>>b;
        if (((n%a==0)and((n/a)*b==m))or (n%a!=0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
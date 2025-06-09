#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase; cin>>testcase;
    while(testcase--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(auto &e : v) cin>>e;
        int res=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>ans+1) res++,ans=v[i];
        }
        cout<<res<<endl;
    }
}
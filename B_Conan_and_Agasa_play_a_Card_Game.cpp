/*                  +-- -- --++-- +- In the name of ALLAH, the lord of mercy, the giver of mercy. -+ --++-- -- --+                           */
/*                                                   "'Let's Mine Some Dopamine!'"                                                         */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                            //
//                                                      author: TheAnonymousAMGR                                              //
//                                                                                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define vectorinput(v) for(auto &e : v) cin>>e;
#define ook order_of_key
#define fbk find_by_order
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define ni int n;cin>>n;
#define nl ll n; cin>>n;
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<=n;i++)
#define str string s;cin>>s;
#define test(fn) int t;cin>>t;while(t--) fn();
#define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define all(v) v.begin(),v.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define lb lower_bound
#define ub upper_bound
#define pr pair<int,int>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define en "\n"
#define dekha cout<<res<<endl;
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// debug section start
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
// debug section closed
/* Ordered Set Template*/
template <typename T>
//order_of_key (k) : Number of items strictly smaller than k
//find_by_order(k) : K-th element in a set (counting from zero)
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*_________________________________________________________________________________________________________________________________________*/
void answer()
{
    int n; cin>>n;
    set<int>st;
    loop
    {
        int x; cin>>x;
        if(st.count(x)) st.erase(x);
        else st.insert(x);
    }
    if(st.empty()) cout<<"Agasa"<<en;
    else cout<<"Conan"<<en;
}
int main()
{
    AMGR();
    answer();
}
/*__________________________________________________________________________________________________________________________________________*/
/*                               ++  --  ++  --  ++  cout<<"That's it. Keep coding:)"<<endl;  ++  --  ++  --  ++                          */
/*                                   "Don't quit. Suffer now and live the rest of your life as a champion."                               */
/*                                                        "Speak good or be silent."                                                      */
/*                                         "You may see me struggle, but you will never see me quit."                                     */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
ll fun(ll n)
{
    ll start=(n*n)*((n*n)-1);
    start/=2;
    ll last=4*(n-1)*(n-2);
    return start-last;
}
void solve()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fun(i)<<endl;
    }
    // cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}


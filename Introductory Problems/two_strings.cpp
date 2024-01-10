

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
ll power(ll pi,ll n)
{
    ll ans=1;
    while(n)
    {
        if(n%2==0)
        {
            pi=(pi*pi)%mod;
            n/=2;
        }
        else
        {
            ans=(ans*pi)%mod;
            n-=1;
        }
    }
    return ans%mod;
}
void solve()
{
    ll n;
    cin>>n;
    ll value=power(2,n);
    cout<<value%mod<<endl;
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


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
void solve()
{
    ll n;
    cin>>n;
    set<ll>st;
    for(int i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            cout<<i<<endl;
        }
    }
   
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
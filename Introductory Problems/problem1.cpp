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
    vector<ll>vec;
    vec.pb(n);
    while(n>1)
    {
        if(n%2)
        {
            n=(n*3)+1;
        }
        else
        n=n/2;
        vec.push_back(n);
    }
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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
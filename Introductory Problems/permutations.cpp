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
  if(n==1)
  cout<<"1"<<endl;
  else if(n<=3)
  cout<<"NO SOLUTION"<<endl;
  else if(n==4)
  {
    cout<<"3 1 4 2"<<endl;
  }
  else
  {
    ll old=1,even=2;
    vector<ll>ans;
    while(old<=n)
    {
        ans.pb(old);
        old+=2;
    }
    while(even<=n)
    {
        ans.pb(even);
        even+=2;
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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
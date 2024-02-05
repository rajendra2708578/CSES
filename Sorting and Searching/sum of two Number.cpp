

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
// power function  --------------------------------//
ll power(ll x, ll y, ll p =mod)
{
    unsigned long long res = 1;


    x = x % p;
    while (y > 0)
    {


        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
// Mod inverse using fermat's little ------------------
ll modInverse(ll n,ll p=mod)
{
    return power(n,p-2,p);
}
// Combination formula---------------------------------
ll nCr(ll n, ll r, ll p=mod)    
{
    if (n < r)
        return 0;


    if (r == 0)
        return 1;
       
    vector<ll> fac(n+1,0);
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;


    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
// end of pre compute functions---------//











void solve()
{
  ll n,k;
  cin>>n>>k;
  vector<pair<ll,ll>>vec;
  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    vec.pb({x,i+1});
  }
  sort(vec.begin(),vec.end());
  int i=0,j=n-1;
  vector<int>ans;
//   for(auto it:vec)
//   {
//     cout<<it.f<<" "<<it.s<<endl;
//   }
  while(i<j)
  {
    if((vec[i].f+vec[j].f)==k)
    {
        ans.pb(vec[i].s);
        ans.pb(vec[j].s);
        break;
    }
    else if(vec[i].f+vec[j].f>k)
    {
        j--;
    }
    else
    i++;
  }
  if(ans.size()==0)
  cout<<"IMPOSSIBLE"<<endl;
  else
  {
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<" "<<ans[1]<<endl;
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






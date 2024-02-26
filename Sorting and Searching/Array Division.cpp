


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

bool check(ll mid,vector<ll>&vec,ll k)
{
    ll sum=0,count=1;
    for(auto it:vec)
    {

        if(it>mid)
        return false;
        else if(sum+it<=mid)
        {
            sum+=it;
        }
        else
        {
            sum=it;
            count++;
        }
    }
    return count<=k;
}
void solve()
{
  ll n,k;
  cin>>n>>k;
  ll sum=0;
  vector<ll>vec(n);
  for(int i=0;i<n;i++)
  {
    cin>>vec[i];
    sum+=vec[i];
  }
  ll low=0,high=sum,ans=sum;
  while(low<=high)
  {
    ll mid=(low+high)/2;
    if(check(mid,vec,k))
    {
        ans=min(ans,mid);
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
  }
  cout<<ans<<endl;

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






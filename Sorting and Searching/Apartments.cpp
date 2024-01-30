





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
//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
   vector<ll>vec(n),vec2(m);
    for(int i=0;i<n;i++)
    {
       cin>>vec[i];
    }
   
    for(int i=0;i<m;i++)
    {
        cin>>vec2[i];
    }
    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());
    ll i=0,j=0,count=0;
    while(i<n && j<m)
    {
        if(vec2[j]==vec[i])
        {
            i++;
            j++;
            count++;
        }
        else if(vec2[j]-k<=vec[i] && vec2[j]+k>=vec[i])
        {
            i++;
            j++;
            count++;
        }
        else if(vec2[j]>vec[i])
        i++;
        else
        j++;
    }
    cout<<count<<endl;
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

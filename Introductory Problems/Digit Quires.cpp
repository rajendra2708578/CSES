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
ll find(ll value,ll place)
{
    // cout<<"start of find "<<value<<" "<<place<<endl;
    string str=to_string(value);
    ll val=str[place-1]-'0';
    // cout<<"value is "<<val<<"  and place is "<<place<<endl;
    return val;
}
ll fun(ll n,ll add,ll start,ll end)
{
    ll ten=1;
    for(int i=1;i<add;i++)
    {
        ten*=10;
    }
    ll diff=n-(start-1);
    ll val=(ten-1)+(diff/add);
    // cout<<"  value is "<<val<<endl;
    if(diff%add==0)
    return val%10;
    else
    return find(val+1,diff%add);
}
void solve()
{
    ll no=1;
   map<ll,pair<ll,ll>>mp;
   ll count=1,prev=0,multi=1;
   ll val;
   cin>>val;
   while(count<18)
   {
       ll val=(multi*10-multi);
    //    cout<<" val is "<<val<<endl;
       mp[count]={prev+1,(val*count)+prev};
       multi*=10;
       prev=(val*count)+prev;
       count++;
   }
//    for(auto it:mp)
//    {
//        cout<<it.f<<" "<<it.s.f<<" "<<it.s.s<<endl;
//    }
   ll non=0;
   for(auto it:mp)
   {
       if(it.s.f<=val && it.s.s>=val)
       {
            non=fun(val,it.f,it.s.f,it.s.s);
            break;
       }
   }
   cout<<non<<endl;
//    cout<<no<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

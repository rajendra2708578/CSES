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
set<ll>st;
multiset<ll>length;
st.insert(0);
st.insert(n);
length.insert(n);
while(k--)
{
    ll x;
    cin>>x;
    st.insert(x);
    auto it=st.find(x);
    ll prevvalue=*prev(it);
    ll nextvalue=*next(it);
    length.erase(length.find(nextvalue-prevvalue));
    length.insert(x-prevvalue);
    length.insert(nextvalue-x);
    cout<<*length.rbegin()<<" ";
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






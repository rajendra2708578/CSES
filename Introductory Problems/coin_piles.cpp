#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
void solve()
{
   ll a,b;
   cin>>a>>b;
   
//    cout<<minv<<" "<<a<<" "<<b<<endl;
    if(min(a,b)*2<max(a,b))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll minv=min(a,b);
        ll diff=max(a,b)-min(a,b);
        if((minv-diff)%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
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


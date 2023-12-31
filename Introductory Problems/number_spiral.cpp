#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
void solve()
{
   ll r,c;
   cin>>r>>c;
   if(r==1 && c==1)
   {
        cout<<1<<endl;
        return;
   }
   ll val;
   if(max(r,c)%2)
   {
        if(r>=c)
        {
            val=(r-1)*(r-1);
            // c-=1;
            while(c--)
            {
                val+=1;

            }
        }
        else
        {
            val=(c)*(c);
            // cout<<val<<endl;
            r-=1;
            while(r--)
            {
                val-=1;
            }
        }
   }
   else
   {
        if(r>=c)
        {
             val=(r)*(r);
            c-=1;
            while(c--)
            {
                val-=1;
            }
        }
        else
        {
             val=(c-1)*(c-1);
            // r-=1;
            while(r--)
            {
                val+=1;
            }
        }
   }
   cout<<val<<endl;
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


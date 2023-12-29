#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
int const mod=1e9+7;
void solve()
{
   string str;
   cin>>str;
   char prev=str[0];
   ll maxv=1,count=1;
   for(int i=1;i<str.size();i++)
   {
        if(prev==str[i])
        {
            count++;
        }
        else
        {
            prev=str[i];
            maxv=max(maxv,count);
            count=1;
        }
   }
   cout<<max(maxv,count)<<endl;
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
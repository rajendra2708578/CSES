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
  ll arr[n];
  ll count=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=1;i<n;i++)
  {
    if(arr[i-1]>arr[i])
    {
        count+=(arr[i-1]-arr[i]);
        arr[i]=arr[i-1];
    }
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
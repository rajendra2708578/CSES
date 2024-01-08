



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
   ll sum=(n*(n+1))/2;
   if(sum%2)
   {
    cout<<"NO"<<endl;
   }
   else
   {
        set<ll>st1,st2;
        ll i=1,j=n,count=0,time=0;
        ll half=sum/2;
        // cout<<"value of the half is "<<half<<endl;
        while(i<j && time<=n)
        {
            if(count+j<=half)
            {
                count+=j;
                // cout<<" add j "<<j<<endl;
                st1.insert(j);
                
            }
            if(count+i<=half)
            {
                count+=i;
                // cout<<"add i "<<i<<endl;
                st1.insert(i);
               
            }

            // cout<<"value of the count"<<count<<endl;
            if(count==half)
            break;

            j--;
            i++;

            time++;
        }
        for(int i=1;i<=n;i++)
        {
            if(st1.find(i)==st1.end())
                st2.insert(i);
        }
        cout<<"YES"<<endl;
        cout<<st1.size()<<endl;
        for(auto it:st1)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        cout<<st2.size()<<endl;
        for(auto it:st2)
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


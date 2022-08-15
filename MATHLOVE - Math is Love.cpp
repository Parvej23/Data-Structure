///https://www.spoj.com/problems/MATHLOVE/
/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define Fon(i,a,b) for(int i=1;i<=n;i++)
#define fon(i,n) for(int i=0;i<n;i++)
#define lcm(a,b) (a/__gcd(a,b)*b)
#define gcd(a,b)  __gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define mem(a,b) memset(a, b, sizeof(a) )
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define bye return 0
#define FASTER_CODE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll getSum(ll n)
{
    return (n*(n+1))>>1;
}

int main()
{
    FASTER_CODE
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l=1, r=1e5,ans=-1;
        while(l<=r)
        {
            ll md=(l+r)/2;
            if(getSum(md)==n)
            {
                ans=md;
                break;
            }
            if(getSum(md)<n)l=md+1;
            else r=md-1;
        }
        if(ans==-1) cout<<"NAI"<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}

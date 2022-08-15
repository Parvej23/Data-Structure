/// Bismillahir Rahmanir Rahim
/// Problem link: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
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

ll a,b,c;
ll getVal(ll x)
{
    return (a*x*x)+(b*x)+c;
}
int main()
{
    FASTER_CODE;
    int t;
    cin>>t;
    while(t--)
    {
        ll k,ans;
        cin>>a>>b>>c>>k;
        ll l=0, r=1e6;
        while(l<=r)
        {
            ll mid=(l+r)>>1;
            if(getVal(mid)>=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    bye;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    int t;
    cin>>t;
    sort(a,a+n);
    int l=0, r=n-1;
    bool done=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==t)
        {
            cout<<mid<<endl;
            done=1;
            break;
        }
        else if(a[mid]<t)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(!done) cout<<"Not Found"<<endl;
}

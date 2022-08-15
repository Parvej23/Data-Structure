#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    int a[]={1,2,3,4,5,6};
    cout<<binary_search(a,a+6, 4)<<endl;
    cout<<binary_search(v.begin(),v.end(), 8)<<endl;
}

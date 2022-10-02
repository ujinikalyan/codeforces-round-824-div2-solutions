#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int mini=INT_MAX;
    for(int i=0;i<n;i++) {
        mini=min(mini,ar[i]);
    }
    int ans=0;
    mini*=2;
    mini--;
    for(int i=0;i<n;i++) {
        ans=ans+ar[i]/mini;
        if(ar[i]%mini==0) ans--;
    }
    cout<<ans<<endl;
}
}

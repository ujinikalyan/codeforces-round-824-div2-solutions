#include<bits/stdc++.h>
#define int long long
using namespace std;
int rep(vector<int> &pos,int j) {
    int cnt=0;
    int p=j;
    while(p!=-1) {
        ++cnt;
        p=pos[p];
        if(p==j) return cnt;
    }
    return -1;
}
void solve() {
    int n; cin>>n;
    string str; cin>>str;
    vector<int> pos(26,0);

    int ref[26];
    for(int i=0; i<26; i++) pos[i]=-1,ref[i]=1;
    for(int i=0; i<n; i++) {
        if(pos[str[i]-'a']==-1)  {
            for(int j=0; j<26; j++) {
                if(ref[j]!=0 and j!=str[i]-'a') {
                    pos[str[i]-'a']=j;
                    int z=rep(pos,j);
                    if(z!=-1 and z!=26)
                    continue;
                    else {
                        ref[j]=0;
                        break;
                    }
                }
            }
        }
        cout<<char(pos[str[i]-'a']+'a');
    }
    cout<<endl;
}
signed main() {
   int T=1;
   cin >> T;
   while(T--) solve();
}

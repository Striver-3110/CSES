#include<bits/stdc++.h>

#define ll long long int

using namespace std;
ll tst(){ll t;cin >> t;return t;}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    int t = tst();
    while(t--){
        ll r,c;
        r = tst();
        c = tst();

        ll mx = max(r,c);
        ll serialNo = 1 + ((mx-1))*(2+(2+(mx-2)*2))/2;
        // cout<<serialNo<<" ";
        if(r == c){cout<<serialNo<<endl;continue;}
        if(r > c){
            if(r&1){
                cout<<serialNo - (r-c)<<endl;
            }else{
                cout<<serialNo + (r-c)<<endl;
            }
        }else if(c > r){
            if(c&1)cout<<serialNo + (c-r)<<endl;
            else cout<<serialNo - (c-r)<<endl;
        }

    }
}
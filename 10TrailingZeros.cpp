#include <bits/stdc++.h>

#define ll long long int
#define MOD 1000000007

void fileIO(){
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
    #endif
} 
using namespace std;
ll tst(){ll t;cin >> t;return t;}


int main(){
    fileIO();
    int n;
    n = tst();
    ll ans = 0;
    while(n>=5){
        ans += (n/5);
        n/=5;
    }
    cout<<ans<<endl;
    
}
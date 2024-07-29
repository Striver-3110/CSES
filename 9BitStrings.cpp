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


ll power(ll n, int x){
    if(x == 0){
        return 1;
    }
    if(x == 1){
        return n;
    }
    long long res = power(n,x/2);
    if(x & 1) return ((n * res)%MOD * res)%MOD;
    return (res * res)%MOD;
}

int main(){
    fileIO();
    int n;
    n = tst();
    cout<<power(2L,n)<<endl;
}
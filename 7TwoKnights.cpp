#include <bits/stdc++.h>

#define ll long long int

using namespace std;
ll tst(){
    ll t;
    cin >> t;
    return t;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll t = 1;
    while(t != n+1){
        ll totalWays = t*t * (t*t - 1) / 2;
        ll attackingPositions2x3 = (t - 2) * (t - 1) * 2;
        ll attackingPositions3x2 = (t - 2) * (t - 1) * 2;

        cout<< totalWays - attackingPositions2x3 - attackingPositions3x2 <<endl;
        t++;
    }
}
#include<bits/stdc++.h>

#define ll long long int

using namespace std;
ll tst(){ll t;cin >> t;return t;}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    int n = tst();
    if(n == 1){cout<<1<<" ";return 0;}
    if(n<=3){cout<<"NO SOLUTION";return 0;}
    for(int i = 2; i <= n; i+=2){
        cout<<i<<" ";
    }
    for(int i = 1; i <= n; i+=2){
        cout<<i<<" ";
    }
}
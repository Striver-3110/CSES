#include<bits/stdc++.h>


#define ll long long int


using namespace std;
ll tst(){ll t;cin >> t;return t;}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    ll n = tst();
    ll sum = 0;
    for(int i = 0; i < n-1; i++){
        int t;
        cin>>t;
        sum+=t;
    }
    cout<<(n*(n+1)/2)-sum<<" ";
}
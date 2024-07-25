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
    int prev = tst();
    ll sum = 0;
    for(int i = 1; i < n; i++){
        int curr = tst();
        if(curr < prev){
            sum += (prev-curr);
        }else{
            prev = curr;
        }
    }
    cout<<sum;
}
#include <bits/stdc++.h>

#define ll long long int

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
    ll n;
    n = tst();
    ll t = n;
    vector<bool> v(n+1, true);
    ll sum = n*(n+1)/2;
    if(sum & 1){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    sum >>=1;
    int cnt = 0;

    while(sum != 0){
        if(sum >= n){
            sum -= n;
            v[n] = false;
            cnt++;
        }else{
            v[sum] = false;
            sum -= sum;
            cnt++;
        }
        n--;
    }
    cout<<cnt<<endl;
    for(int i = 1; i <= t; i++){
        if(!v[i])cout<<i<<" ";
    }
    cout<<endl;
    cout<<t-cnt<<endl;
    for(int i = 1; i <= t; i++){
        if(v[i])cout<<i<<" ";
    }    
}
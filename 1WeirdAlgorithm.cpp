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
    cout<<n<<" ";
    while(n!=1){
        if(n&1)n = n * 3,n++;
        else n/=2;
        cout<<n<<" ";
    }
    cout<<endl;
}
#include<bits/stdc++.h>


#define ll long long int


using namespace std;
ll tst(){ll t;cin >> t;return t;}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    string s;
    cin>>s;
    int len = 1;
    int n = s.length();
    int mx = INT_MIN;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1])len++;
        else mx = max(mx,len), len = 1;
    }
    cout<<max(mx,len);
}
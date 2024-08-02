#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb(a) push_back(a)

#define MOD 1000000007

void fileIO(){
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
    #endif
} 

int main(){
    fileIO();

    int n ;
    cin>>n;

    function<vector<string>(int)> rec = [&](int n){
        if(n == 1){
            return vector<string> {"0", "1"};
        }
        vector<string> recGray = rec(n-1);
        vector<string> newGray;

        for(auto &str: recGray){
            newGray.pb("0"+str);
        }
        
        for(int i = recGray.size()-1; i >= 0; i--){
            newGray.pb("1"+recGray[i]);
        }

        return newGray;

    };

    vector<string> ans = rec(n);

    for(auto &str: ans){
        cout<<str<<endl;
    }
    return 0;    
}
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

    int n;
    cin>>n;

    vector<vector<char>> ans;


    function<void(int, char, char, char)> toh = [&](int n,char from, char to, char aux){
        if(n == 0){
            return;
        }

        toh(n-1, from, aux, to);
            vector<char> temp;
            temp.pb(from);
            temp.pb(to);
            ans.pb(temp);
        toh(n-1, aux, to, from);
    };

    toh(n, '1','3','2');
    cout<<ans.size()<<endl;

    for(auto v: ans){
        cout<<v[0]<<" "<<v[1]<<endl;
    }
    return 0;    
}
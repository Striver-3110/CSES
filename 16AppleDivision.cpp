#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb(a) push_back(a)
#define all(x) x.begin(),x.end()

#define MOD 1000000007

void fileIO(){
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
    #endif
} 

class Solution{
    public:
    void solve(int i, string &s, string &temp, set<string> &ans, vector<bool> &vis){
        if(i == s.size()){
            ans.insert(temp);
            return;
        }

        for(int j = 0; j < s.size(); j++){
            if(!vis[j]){
                temp+=s[j];
                vis[j] = true;
                solve(i+1, s, temp, ans, vis);
                vis[j]= false;
                temp.pop_back();
            }
        }

        //? cpp builtins
        // do{
        //     ans.pb(s);
        // }while(next_permutation(all(s)));
    }
};

int main(){
    fileIO();
 
    string s;
    cin>>s;
    sort(all(s));
    
    set<string> ans;
    vector<bool> vis(s.size(), false);
    string temp = "";
    Solution sol;
    sol.solve(0,s,temp,ans,vis);

    cout<< ans.size()<<endl;

    for(auto &s: ans){
        cout<<s<<endl;
    }

    return 0;    
}
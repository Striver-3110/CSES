#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define MOD 1000000007

void fileIO(){
    #ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); 
    #endif
} 

int main(){
    fileIO();
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        if(a<b){
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
            // function<bool(ll,ll)> solve = [&](ll a, ll b){
            //     if(a < b)swap(a,b);
            //     if(a == 0 && b == 0){
            //         return true;
            //     }
            //     if(a < 0 || b < 0){
            //         return false;
            //     }
            //     return solve(a-1, b-2) || solve(a-2, b-1);
            // };
            // brute force and surely give TLE
            // as well as if you want to memoize this then it will require too larger space as the constraints is too high 
            // if(solve(a,b))cout<<"YES\n";
            // else cout<<"NO\n";

            // greedy solution
            // every time you are subtracting 3 from the pair of a,b

        if((a+b) % 3 == 0 && a <= b * 2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
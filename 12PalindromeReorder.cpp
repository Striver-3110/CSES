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

    string s;
    cin>>s;
    int n = s.length();
    unordered_map<char,int> count;
    for(char &ch: s){
        count[ch]++;
    }

    int oddCount = 0;

    char oddChar = '*';
    for(auto &p : count){
        if(p.second & 1) oddCount++, oddChar=p.first;
    }
    if(oddCount > 1){
        cout<<"NO SOLUTION\n";
        return 0;
    }

    int i = 0; 
    int j = n-1;

    for(auto &p: count){
        if(p.second & 1)continue;
        int freq = p.second;
        while(i<=j & freq > 0){
            s[i] = s[j] = p.first;
            i++;
            j--;
            freq -= 2;
        }
    }
    int frq = count[oddChar];
    while(i<=j && frq > 0){
        s[i] = s[j] = oddChar;
        i++;
        j--;
        frq-=2;
    }
    cout<<s<<endl;
    
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> all_strings(string s, string acc) {
    if(s.length() == 0) return {acc};
    vector<string> res;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        vector<string> temp = all_strings(s.substr(0,i) + s.substr(i+1, n-i-1), acc+s[i]);
        res.insert(res.end(), temp.begin(), temp.end());
    }
    return res;
}

void solve(){
    string s;
    cin>>s;
    vector<string> res = all_strings(s, "");
    set<string> st(res.begin(), res.end());
    cout<<st.size()<<'\n';
    for(string w : st) cout<<w<<'\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

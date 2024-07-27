#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
vector<string> rec(int n) {
    if(n == 1) return {"0", "1"};
 
    vector<string> prev = rec(n-1);
    vector<string> rev(prev.begin(), prev.end());
    reverse(rev.begin(), rev.end());
    for(int i = 0; i < prev.size(); i++) prev[i] = "0" + prev[i];
    for(int i = 0; i < rev.size(); i++) rev[i] = "1" + rev[i];
    prev.insert(prev.end(), rev.begin(), rev.end());
    return prev;
}
 
void solve(){
    int n;
    cin >>n;
 
    vector<string> result = rec(n);
    for(string s : result) cout<<s<<'\n';
 
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int max_length = 0, start = 0, n = s.length();
    char curr = s[0];
    for(int i = 1; i < n; i++) {
        if(s[i] != curr) {
            max_length = max(max_length, i - start);
            curr = s[i];
            start = i;
        }
    }
 
    max_length = max(max_length, n-start);
    cout<<max_length<<'\n';
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;

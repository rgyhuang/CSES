#include <bits/stdc++.h>
using namespace std;

int n;
void solve(){
    cin >> n;
    int res = 0;
    for(int i = 0; i < n-1; i++) {
        int temp;
        cin >> temp;
        res ^= temp;
        res ^= (i+1);
    }
    res ^= n;
    cout<<res<<'\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

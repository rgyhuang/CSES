#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long r, c, x;
    cin>>r>>c;
    
    if(r > c) {
        x = (r-1)*(r-1);

        if(r % 2ll == 0) {
            x += 2 * r - c;
        } else {
            x += c;
        }
    } else {
        x = (c-1)*(c-1);
        if(c % 2ll == 0) {
            x += r;    
        } else {
            x += 2 * c - r;
        }
    }

    cout<<x<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

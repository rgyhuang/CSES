#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    ll mod = 1e9+7;
    cin >> n;
    ll x = 1;
    while(n--) {
        x = (x << 1) % mod;
    }
    cout<<x<<'\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

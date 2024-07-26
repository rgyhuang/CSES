#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;
    for(ll k = 1; k <= n; k++) {
        ll total_spots = k*k*(k*k-1)/2;
        ll total_attacks = 4 * (k-1)*(k-2);
        cout<<total_spots-total_attacks<<'\n';
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

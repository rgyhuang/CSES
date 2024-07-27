#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    
    ll counter = 0;
    while(n > 1) {
        counter += n/5;
        n /= 5;
    }
    cout<<counter<<'\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

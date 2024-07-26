#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long last, curr, counter = 0;
    cin >> last;
    --n;
    while(n--) {
        cin >> curr;
        if(last > curr) {
            counter += (last-curr);
        } else {
            last = curr;
        }
    }
    cout<<counter<<'\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

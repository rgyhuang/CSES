#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll rec(vector<ll>& v, int index, ll sum1, ll sum2) {
    if(index == v.size()) return abs(sum1-sum2);
    ll pick = rec(v, index+1, sum1+v[index], sum2);
    ll no_pick = rec(v, index+1, sum1, sum2+v[index]);
    return min(pick, no_pick);
}

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    cout<<rec(v,0,0,0)<<'\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

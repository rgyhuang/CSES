#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>> moves;
int tower_moves(int n, int curr, int free, int target) {
    if(n == 1) {
        moves.push_back({curr, target});
        return 1;
    }
    int count = tower_moves(n-1, curr, target, free);
    moves.push_back({curr, target});
    count += 1 + tower_moves(n-1, free, curr, target);
    return count;
}
void solve(){
    int n;
    cin >> n;

    cout<<tower_moves(n, 1, 2, 3)<<'\n';
    for(auto v : moves) cout<<v[0]<<" "<<v[1]<<'\n';
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

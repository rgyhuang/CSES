#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 1) cout<<1<<'\n';
    else if (n == 2 || n == 3) cout<< "NO SOLUTION" << '\n';
    else {
        string evens = "2", odds = "1";
        for(int i = 3; i <= n; i++) {
           if((i & 1) == 0) evens +=" " + to_string(i);
           else odds += " " + to_string(i);
        }
        cout<<evens<<" "<<odds<<'\n'; 
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long sum = n*(1+n)/2;
    if(sum % 2 != 0) cout<<"NO"<<'\n';
    else {
        vector<long long> sum1, sum2;
        long long target = sum/2;
        for(long long i = n; i >= 1; i--) {
            if(target >= i) {
                target -= i;
                sum1.push_back(i);
            } else sum2.push_back(i);
        }
        cout<<"YES"<<'\n';
        cout<<sum1.size()<<'\n';
        for(auto x : sum1) cout<<x<<' ';
        cout<<'\n';
        cout<<sum2.size()<<'\n';
        for(auto x : sum2) cout<<x<<' ';
        cout<<'\n';
        
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

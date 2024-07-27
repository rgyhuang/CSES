#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for(char c : s) {
       arr[c-'A']++;
    }
    string middle = "";
    string result = "";
    bool no_sol = false;
    for(int i = 0; i < 26; i++) {
        if(arr[i] % 2 == 0) {
            char letter = 'A' + i;
            for(int j = 0; j < arr[i]/2; j++) result += letter;
        } else if(middle == "") {
            char letter = 'A' + i;
            for(int j = 0; j < arr[i]; j++) middle += letter;
        } else {
            no_sol = true;
            break;
        }
    }
    if(no_sol) cout<<"NO SOLUTION"<<'\n';
    else {
        string opposite = result;
        reverse(opposite.begin(), opposite.end());
        result = result + middle + opposite;

        cout<<result<<'\n';
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

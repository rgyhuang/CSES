#include <bits/stdc++.h>
#define ll long long
using namespace std;


void rec(vector<vector<char>>& board,
       vector<bool>& col,
       vector<bool>& diag1,
       vector<bool>& diag2,
       int row, int& ans) {
    if(row == 8) {
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++) {
        if(col[i] || diag1[row+i] || diag2[row+8-i] || board[row][i] == '*') continue;
        col[i] = diag1[row+i] = diag2[row+8-i] = true;
        rec(board, col, diag1, diag2, row+1, ans);
        col[i] = diag1[row+i] = diag2[row+8-i] = false;
    }
}

void solve(){
    vector<vector<char>> board(8, vector<char>(8));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) cin >> board[i][j];
    }
    int ans = 0;
    vector<bool> col(8), diag1(15), diag2(15);
    rec(board, col, diag1, diag2, 0, ans);
    cout<<ans<<'\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

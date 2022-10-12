vector<vector<int>> jump(20, vector<int>(n + 1, n));
fo(i, n) {
    jump[0][i] = next[i];
}

for (int i = 1; i < 20; i++) {
    for (int j = 0; j <= n; j++) {
        jump[i][j] = jump[i - 1][jump[i - 1][j]];
    }
}
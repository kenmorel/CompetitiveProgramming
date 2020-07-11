#include <bits/stdc++.h>

#define uint64  long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    uint64 uncompressed_songs = 0;
    vector<int> compressed_diff;

    for (int i = 0; i < n; ++i) {
        int uncompress, compress;
        cin >> uncompress >> compress;

        uncompressed_songs += uncompress;
        compressed_diff.push_back(uncompress - compress);
    }

    sort(compressed_diff.begin(), compressed_diff.end(), greater<int>());

    for (int i = 0; i < (int)compressed_diff.size(); ++i) {
        if (uncompressed_songs <= m) {
            cout << i << endl;
            return 0;
        }
        
        uncompressed_songs -= compressed_diff[i];
    }

    if (uncompressed_songs > m) cout << "-1" << endl;
    else cout << n << endl;
    return 0;
}
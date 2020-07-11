#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int t = 0; t < n; t++) {
        int a, b;
        cin >> a >> b;
        
        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << b - (a%b) << endl;
    }
    return 0;
}
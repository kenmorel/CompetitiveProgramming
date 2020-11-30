#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c ;
    cin >> n >> a >> b >> c;

    vector<int> dp(n+1);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        int x = -1, y = -1, z = -1;
        if (i >= a)
            x = dp[i-a];
        if (i >= b)
            y = dp[i-b];
        if (i >= c)
            z = dp[i-c];

        if (x == -1 && y == -1 && z == -1)
            dp[i] = -1;
        else
            dp[i] = max(x, max(y, z)) + 1; 
    }
    
    cout << dp[n]<< endl;
	return 0;
}	

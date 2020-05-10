#include <bits/stdc++.h>

using namespace std;

int main() {
	// Fast I/O
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	
	while (t--) {
		int n, digit = 0;
		cin >> n;
		vector<int> rounds;
		while (n) {
			int last = n%10;
			if (last != 0)
				rounds.push_back(last * pow(10, digit));
			digit++;
			n /= 10;
		}
		cout << (int)rounds.size() << endl;
		for (auto &x: rounds)
			cout << x << " ";
		cout << endl;
	}

	return 0;
}	

#include <bits/stdc++.h>

using namespace std;

int main() {
	// Fast I/O
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int bacterias, min = 0;
	cin >> bacterias;

	while (bacterias) {
		if (bacterias & 1)
			min++;
		bacterias >>= 1;
	}
	cout << min << endl;
	return 0;
}	

#include <bits/stdc++.h>

using namespace std;

int main() {
	// Fast I/O
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	unordered_map<string, int> database;

	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
	
		if (database.find(name) != database.end()) { /* name is already in the map */
			cout << name << database[name] << endl;
			database[name] += 1;
		} 
		else { /* Add to the map */
			cout << "OK" << endl;
 			database[name] = 1; 
		}
	}

	return 0;
}	

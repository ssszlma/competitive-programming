#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	vector<int> candy; candy.reserve(n);

	for(int i = 0; i < n; i++) {
		cin >> candy[i];
	}

	int a, b; cin >> a >> b;

	int result = 0;

	while (a <= b) {
		result += candy[a];
		a++;
	}

	cout << result;

}

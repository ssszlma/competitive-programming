// I skipped the other questions bc why not lol

#include <bits/stdc++.h>
using namespace std;

bool chkPair(int A[], int size, int x)
{
	for (int i = 0; i < (size - 1); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (A[i] + A[j] == x) {
				return 1;
			}
		}
	}

	return 0;
}

int main()
{
    int n, x; cin >> n >> x;

    int A[n] = { 0 };

    for(int i=0; i<n; i++){
        cin>>A[i];
    }

	int size = sizeof(A) / sizeof(A[0]);

	if (chkPair(A, size, x)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}


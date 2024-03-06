#include <bits/stdc++.h> 
using namespace std; 

void uwu() 
{ 
	int n; cin >> n;
    vector<int> digits;
	for (int i = 31; i >= 0; i--) { 
		int k = n >> i; 
		if (k & 1) {
			digits.push_back(1);
		} 
		else {
			digits.push_back(0);
		}
	} 
	
	int size = digits.size();
	int sum = 0;
	for(int i = 0; i < size; i++) {
	    sum = sum + digits[i];
	}

	if (sum % 2 == 0) {
		cout << "EVEN";
	} else {
		cout << "ODD";
	}
} 

// uwu
int main() 
{ 
	int tcs; cin >> tcs;
	while(tcs--) { uwu(); cout << endl; }
}

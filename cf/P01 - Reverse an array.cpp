#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int length; cin >> length;
 
	vector<int> nums; nums.reserve(length);
 
	for(int i = 0; i < length; i++) {
		cin >> nums[i];
	}
 
	vector<int> rev; rev.reserve(length);
 
 
	int v = length;
	while (v--) { rev.push_back(nums[v]); }
 
	for(int i = 0; i < length; i++) {
		cout << rev[i] << " ";
	}
 
 
 
}

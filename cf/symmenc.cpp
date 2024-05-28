#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;
 
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}

void decode() {
	//initialize
	int letters; cin >> letters;
	vector<char> word; word.reserve(letters);
	string r; string phrase;
	
	//get s2
	for (int i = 0; i < letters; i++) { cin >> word[i]; }

	//get r
	for (int i = 0; i < letters; i++) { r+=word[i]; phrase+=word[i];}
	int n = r.size();
   	r = removeDuplicates(r, n);
	sort(r.begin(), r.end());

	//take s2, if s2 == r[i], s1 +=
	string s1 = r;
	reverse(s1.begin(), s1.end());

	string s2;

	for(int i = 0; i < letters; i++) {
		char letter = phrase[i];
		for(int j = 0; j < r.length(); j++) {
			if (r[j] == letter) {
				s2 += s1[j];
			}
		}
	}

	cout << s2 << "\n";




}

int main() {
	int tcs; cin >> tcs;
	while(tcs--) decode();
}

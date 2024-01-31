#include <bits/stdc++.h>
using namespace std;

void abbreviate() {

	int amt; cin >> amt; // get the number of words from input
	vector<string> words; words.reserve(amt); // create vector to store words, set the size to the amount of words

	int tot = amt; // will get rid of this in the loop
	 
	while(tot--) { // for every words given add it to the vector, runs until amount of words = 0
		string word;
		cin >> word; words.push_back(word);
	}
	
	for(int i = 0; i < amt; i++) { // loop to check each word
	if (words[i].length() > 10) { // if a words length is more than or 10
			
		int size = words[i].length(); // size of the word

		char l1 = words[i][0]; //first letter
		char l2 = words[i][size-1]; //last letter

		cout << l1 << size-2 << l2 << endl; // first letter size last letter
	} else {
		cout << words[i] << endl; // or just print the word
	}
	}
}

int main() { abbreviate(); } // run the function

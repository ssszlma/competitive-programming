#include <bits/stdc++.h>
using namespace std;

void replace(string p) {

    vector<char> chars; chars.reserve(p.length());
    int size = p.length();
    
    for (int i = 0; i < size; i++) {
        chars.push_back(p[i]);
    }

    for(int i = 0; i < size; i++) {
        if (chars[i] == 'a') {
            chars.at(i) = '4';
        } else if (chars[i] == 'i') {
            chars.at(i) = '1';
        } else if (chars[i] == 'e') {
            chars.at(i) = '3';
        } else if (chars[i] == 'o') {
            chars.at(i) = '0';
        } else if (chars[i] == 's') {
            chars.at(i) = '5';
        } 
    }

    for(int i = 0; i < size; i++) {
        cout << chars[i];
    }

}

int main() {
    string phrase; cin >> phrase;
    replace(phrase);
}

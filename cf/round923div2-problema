// solution: get first and last indexes containing 'B', edit output based on conditions
#include <bits/stdc++.h>
#include <cstddef>
using namespace std;


void min() {
    int amount; string cells;
    cin >> amount;
    cin >> cells;
    
    vector<int> indexes;

    //cout << amount << " " << cells << endl; // checking

    for(int i = 0; i < amount; i++) {
        
        if (cells[i] == 'B') {
            indexes.push_back(i);
        }

    }

    char ch = 'B';
    size_t last;
    
    last = int(cells.find_last_of(ch));
    int first = cells.find('B');

// conditions for output
    if (first == 0) {
        cout << last+1 << endl;
    } else if (first > 0 && last > 0) {
        cout << (last-first)+1 << endl;
    } else { 
        cout << " " << endl;
    }


}

int main() {
    int t; cin >> t;
    while(t--) min();
}

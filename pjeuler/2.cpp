#include <bits/stdc++.h>
using namespace std;

// fibonacci sequence: 
/* each new term is term1 + term2 */

void fibonacci() {
    
    int max = 4000000;
    vector<long long> vals;
    long long res = 0;

    vals.push_back(1); vals.push_back(2);

    long long first = 0;
    long long second = 1;

    while(vals[first] < max && vals[second] < max) {
        vals.push_back(vals[first] + vals[second]);
        first += 1; second += 1;
    }

    for(int i = 0; i < vals.size(); i++) {
        if (vals[i] % 2 == 0) {
            res += vals[i];
        } else {
            res += 0;
        }
    }

    cout << res; // output sum of all positive values < 4,000,000

}

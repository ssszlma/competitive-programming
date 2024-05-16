#include <bits/stdc++.h>
using namespace std;

//  x = a^2 + b^2

int sumsq(int n) {

    int sums = n * (n+1) * ((2 * n) + 1);
    sums = sums / 6;

    return sums;
}

int sums(int n) {

    int sums = 0;

    for(int i = 0; i < n; i++) { 
        sums += (i)+1;
    }


    return sums * sums;
}



int main() {
    cout << abs(sumsq(100) - sums(100));
}

#include <bits/stdc++.h>
using namespace std;

// somehow worked on two tcs, still dont know how this works

void money() { 
    int n, k; cin >> n >> k;
    vector<int> day; day.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> day[i];
    }
    
    int price = 0;

    for (int i = 0; i < n; i++) {
        
        if ((day[i+1] - day[i]) <= 2) {
            price = (day[i+1]-day[i])+1;
        } else {
            price = 1 + k;
        }

    }

    cout << abs(price)-1;



}


int main() {
    money();
}

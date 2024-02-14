#include <iostream>
#include <vector>
#include <string>

using namespace std;

void enlarge(const vector<string>& signal, int m, int n, int k) {
    for (const string& line : signal) {
        for (int p = 0; p < k; ++p) { // row is repeated k times
            for (char th : line) {
                for (int q = 0; q < k; ++q) {// character is repeated k times
                    cout << th;
                }
            }
            cout << endl;
        }
    }
}

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    vector<string> signal(m);
    for (int i = 0; i < m; ++i) {
        cin >> signal[i];
    }

    enlarge(signal, m, n, k);

    return 0;
}

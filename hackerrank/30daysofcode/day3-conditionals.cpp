#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;  
    cin >> num;
    
    if (num % 2 != 0) {
        cout << "Weird";
    } else if (num >= 2 && num <= 5) {
        cout << "Not Weird";
    } else if (num >= 6 && num < 21) {
        cout << "Weird";
    } else if (num % 2 == 0 && num > 20) {
        cout << "Not Weird";
    }
    
    
}

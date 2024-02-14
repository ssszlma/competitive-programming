#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int second;
    double doubles;
    
    cin >> second >> doubles;
    string stringg;
    getline(cin >> ws, stringg); 
    
    double ans = d + doubles;
        
    cout << i + second << endl;
    printf("%.1f", ans);

    cout << endl << s + stringg;
    
    return 0;
}

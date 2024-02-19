#include <bits/stdc++.h>

using namespace std;

void gmax() { 
	string str; getline(cin, str);
	unordered_map<char,int>g;
    
    int t=0;
    char uwu = ' ';

    for(int i=0 ;i<6 ; i++){
        g[str[i]]++;
        if(t < g[str[i]]){
            uwu = str[i];
            t = g[str[i]];
        }
    }
     
	
	
	cout << uwu << '\n';
	
}

int main()
{
	int tcs; cin >> tcs;
    cin.ignore();
	while(tcs--) gmax();

}

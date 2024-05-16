#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isprime(ll n) // true=1
{
    if (n <= 1)
        return false;
 
    for (ll i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 

 void primefactors(vector<ll> factors, ll size) {

    vector<ll> prime; ll counter = 0;

    for(ll i = 0; i < size; i++) {
        if (isprime(factors[i]) == 1) {
            prime.push_back(factors[i]);
            counter += 1;
        } 
    }

    sort(prime.begin(), prime.end(), greater<ll>());

    cout << prime[0] << " ";

}



void factors(ll n) { 
    vector<ll> factors;

	for (ll i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{       factors.push_back(i);
                factors.push_back(n/i);
		} 
	} 

    ll size = factors.size();

   /* for (ll i = 0; i < size; i++) {
        cout << factors[i] << " " << isprime(factors[i]) << "\n";
    } */

    primefactors(factors, size);
 

} 


int main() { 
    ll n; cin >> n;
    factors(n); 
} 



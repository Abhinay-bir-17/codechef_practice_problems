#include <bits/stdc++.h>
void fastscan(int &number)
{	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c == '-')
	{	negative = true;
		c = getchar();
	} for (; (c > 47 && c < 58); c = getchar())
		number = number * 10 + c - 48;
	if (negative)
		number *= -1;
}
using namespace std;
#define FOR(i,a,b) for(auto i = (a); i < (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI0n(i,n) FOR(i,0,(n))
#define RI1n(i,n) FOR(i,1,(n))
#define RI0n1(i,n) FOR(i,0,(n)-1)
#define RDn10(i,n) FORD(i,(n)-1,0)
// #define push_back pb;
typedef long long ll;
typedef vector<int> vi;
const ll inf = 1e9 + 7;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
ll fact[N];
void code(vector<ll>&ar) {
	int n; cin >> n;
	ll l = 0, len = ar.size(), r = len - 1;
	// find upper bound
	while (l <= r) {
		ll m = (l + r) / 2;
		if (ar[m] == n) {
			cout << "0" << endl; return;
		} else if (ar[m] > n)r = m - 1;
		else l = m + 1;
	}

	if (r == -1) {
		cout << ar[0] - n << endl; return;
	} else if (r == n) {
		cout << n - ar[len - 1] << endl; return;
	}
	// if r is less than l
	if ( ( ar[ l] - n) >    (n - ar[ r]))
		cout << (n - ar[ r]) << endl;
	else cout << ar[l] - n << endl;
}
int main()
{
//
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); vector<ll> ar;
	for (int i = 1; i <= 30; i++) {

		for (int j = 0; j < i; j++) {
			ll temp = (pow(2, i) + pow(2, j));

			if (temp > M)break;
			ar.push_back(temp);
		}
	}
	int t; cin >> t; while (t--)code(ar);
}

// using 1ll , below is the correct answer , swaped 2 stmnts in for loop during
// precomputation
#include <bits/stdc++.h>
void fastscan(int &number)
{	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c == '-')
	{	negative = true;
		c = getchar();
	} for (; (c > 47 && c < 58); c = getchar())
		number = number * 10 + c - 48;
	if (negative)
		number *= -1;
}
using namespace std;
#define FOR(i,a,b) for(auto i = (a); i < (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI0n(i,n) FOR(i,0,(n))
#define RI1n(i,n) FOR(i,1,(n))
#define RI0n1(i,n) FOR(i,0,(n)-1)
#define RDn10(i,n) FORD(i,(n)-1,0)
// #define push_back pb;
typedef long long ll;
typedef vector<int> vi;
const ll inf = 1e9 + 7;
const int M = 1e9 ;
const int N = 1e5 + 10;
ll fact[N];
void code(vector<ll>&ar) {
	int n; cin >> n;
	ll l = 0, len = ar.size(), r = len - 1;
	// find upper bound
	while (l <= r) {
		ll m = (l + r) / 2;
		if (ar[m] == n) {
			cout << "0" << endl; return;
		} else if (ar[m] > n)r = m - 1;
		else l = m + 1;
	}

	if (r == -1) {
		cout << ar[0] - n << endl; return;
	} else if (r == n) {
		cout << n - ar[len - 1] << endl; return;
	}
	// if r is less than l
	if ( ( ar[ l] - n) >    (n - ar[ r]))
		cout << (n - ar[ r]) << endl;
	else cout << ar[l] - n << endl;
}

int main()
{
	//
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); vector<ll> ar;
	for (int i = 1; i <= 30; i++) {

		for (int j = 0; j < i; j++) {
			ll temp = (1ll << i) + (1ll << j);

			if (temp > M)break;
			ar.push_back(temp);
		}
	}

	int t; cin >> t; while (t--)code(ar);
}
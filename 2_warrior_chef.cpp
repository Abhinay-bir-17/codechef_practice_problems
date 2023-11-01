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
int check(vector<int>ar, ll m, int h, int n) {
	RI0n(i, n) {//
		if (ar[i] > m) {
			h -= ar[i];
			if (h < 1 )return 0;
		}
	} return 1;
}
void binary_search_method() {
	int n, h; cin >> n >> h;
	vi ar;
	RI0n(i, n) {
		int temp; cin >> temp;
		ar.push_back(temp);
	}
	ll l = 0, r = 1e9 + 7;
	while ((r - l) > 1) {
		ll m = (l + r) / 2;
		ll aux = check(ar, m, h, n);
		if (aux) {
			r = m ;
		} else l = m + 1;
	}
	if (check(ar, l, h, n)) {
		cout << l << endl;
	} else {cout << h << endl;}

}
void code() {
	// code here abhinay bir come on you can do it okay.
	int n, h; cin >> n >> h;
	vi v; ll sum = 0;
	RI0n(i, n) {
		int temp; cin >> temp;
		v.push_back(temp);
		sum += temp;
	}
	if (sum < h) {
		cout << "0" << endl; return;
	}
	sort(v.begin(), v.end());
	ll aux = 0;
	RI0n(i, n) {
		aux += v[i];
		if ( (sum - (h + aux)) < 0) {
			cout << v[i] << endl; return;
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input_2023.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output_2023.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--)binary_search_method();

}
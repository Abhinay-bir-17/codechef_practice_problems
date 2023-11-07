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
const int M = 1e9;
const int N = 1e5 + 10;
ll fact[N];

void code() {
	// code here abhinay bir come on you can do it okay.
	ll n, h; cin >> n >> h;  vi ar;
	ll maxx = 0;
	RI0n(i, n) {
		int temp; cin >> temp; ar.push_back(temp);
		if (maxx < temp)maxx = temp;
	}
	ll l = 1, r = M, ans = -1;
	while (l <= r) {
		ll m = (l + r) / 2;
		if (m >= maxx) {
			ans = m;
			r = m - 1;
		}
		else {
			// loop over ar to find sum
			ll sum = 0;//  no of hours to eat all
			RI0n(i, n) {
				if (ar[i] <= m)sum += 1;
				else {
					if ( ar[i] % m == 0)sum += (ar[i] / m);
					else sum += (ar[i] / m) + 1;
				}
			}
			if (sum <= h) {
				ans = m; r = m - 1;
			} else {
				l = m + 1; // need to move forward
			}
		}
	} cout << ans << endl;

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
	int t; cin >> t; while (t--)code();

}
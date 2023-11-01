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
void code1(vi ar, int n, int q) {
// 	cout << "n inside code1 is:" << n << ", q is:" << q << endl;
	sort(ar.begin(), ar.end());
	for (int i = 0; i < q; i++) {
		int temp; cin >> temp;
// 		cout << "temp is:" << temp << ", i is:" << i << endl;
		int l = 0, r = n - 1, ans = -1;
		int flag = 0;
		while (l <= r) {
			int m = (l + r) / 2;
			if (ar[m] == temp) {
				flag = 1; break;
			}
			else if (ar[m] < temp) {
				ans = m;
				l = m + 1;
			} else {
				r = m - 1;
			}
		}// while loop over
		if (flag) {cout << "0" << endl; continue;}
		if (r == -1)ans = -1;
		else if (l == n) {cout << "POSITIVE" << endl; continue;}

		if ((n - (ans + 1)) & 1) {
			cout << "NEGATIVE" << endl;
		} else {cout << "POSITIVE" << endl;}
	}// for loop over for q
}

void code() {
	// code here abhinay bir come on you can do it okay.
	int n, q; cin >> n >> q;  vi v;
	RI0n(i, n) {
		int temp; cin >> temp; v.push_back(temp);
	} // cout << "q is:" << q << endl;
	code1(v, n, q);
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
	code();

}
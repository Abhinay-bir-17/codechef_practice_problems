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
void code() {
	// code here abhinay bir come on you can do it okay.
	ll n, m; cin >> n >> m;  vi ar;
	ll aux = 0;
	string s; cin >> s;
	RI0n(i, n) {
		if (s[i] == '1') {
			aux += 1;// aux has sum of first n el only
		}
		ar.push_back(aux);
	}
	ll total_sum = aux * m; // sum of whole n*m string
	if ( total_sum & 1) {cout << "0" << endl; return;}
	// cout<<" arr len is:"<<arr.size()<<",is:"<<endl;
	// for(auto it: arr)cout<<it<<" ";

	// find the el which has half sum
	ll l = 0; ll r; r = n * m - 1; total_sum = total_sum / 2;
	ll mid ;
	while (l <= r) {
		mid = (l + r) / 2;
		ll temp =  (mid / n) * aux + ar[mid % n];
		if (temp == total_sum) {
			break;
		}
		else if (temp > total_sum)r = mid - 1;
		else l = mid + 1;
	}

	// find lower and upper bound
	// lower bound
	l = 0 ; r = mid - 1; ll lb = -1;
	while (l <= r) {
		ll mid_l = (l + r) / 2;
		ll temp =  (mid_l / n) * aux + ar[mid_l % n];
		if (temp == total_sum) {
			r =  mid_l - 1;
			lb = mid_l;
		} else if (temp < total_sum)l = mid_l + 1;
	}
	if (lb == -1)lb = mid;

	// upper bound
	l = mid + 1; r = n * m - 1; ll ub = -1;
	while (l <= r) {
		ll mid_r = (l + r) / 2;
		ll temp =  (mid_r / n) * aux + ar[mid_r % n];
		if (temp == total_sum) {
			ub = mid_r; l = mid_r + 1;
		} else if (temp > total_sum)r = mid_r - 1;
	}
	if (ub == -1)ub = mid;

	cout << mid - lb + 1 +  ub - mid << endl;
}
int main()
{
//
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--)code();
}
// https://www.codechef.com/problems/TRICOIN?tab=statement

// soltuion 1: my brute force
#include <bits/stdc++.h>
using namespace std;
// void code(){
//     int n; cin>>n;
//     long long ans =  sqrt(1+8*n);
//     ans += -1; ans =ans/2;
//     cout<<ans<<endl;
// }
void code() {
	int n; cin >> n;
	int i = 0; long long ans = 0, sum = 0;
	while (sum < n) {
		i += 1; sum += i;
		if (sum <= n)ans += 1;
	} cout << ans << endl;
}
int main() {
	// your code goes here
	int t; cin >> t; while (t--)code();
	return 0;
}
// solution 2: my sqrt method
#include <bits/stdc++.h>
using namespace std;
void code() {
	int n; cin >> n;
	long long ans =  sqrt(1 + 8.0 * n);
	ans += -1; ans = ans / 2;
	cout << ans << endl;
}
// void code(){
//     int n;cin>>n;
//     int i=0; long long ans = 0, sum=0;
//     while(sum<n){
//         i+=1; sum+=i;
//         if(sum<=n)ans+=1;
//     }cout<< ans<<endl;
// }
int main() {
	// your code goes here
	int t; cin >> t; while (t--)code();
	return 0;
}


// codechef ka solution
int sum(int h) {
	return (h * (h + 1) / 2);
}
void solve() {
	int n; cin >> n;
	int h = 1; // n is>=1
	while (sum(h) <= n) {
		h += 1;
	} cout << h - 1 << endl;
}


// binary search ka my solution:
#include <bits/stdc++.h>
using namespace std;
typedef long ll
ll sum(ll n) {
	return (n * (n + 1) / 2);
}
void code() {
	ll n; cin >> n;
	ll l = 1, r = n;
	while (l <= r) {
		ll m = (l + r) / 2;
		if ( sum(m) == n) {
			cout << m << endl; return;
		}
		else if (sum(m) < n)l = m + 1;
		else r = m - 1;
	} cout << r << endl;
}
int main() {
	// your code goes here
	int t; cin >> t; while (t--)code();
	return 0;
}

// binary search solution of codechef
void code() {
	int n; cin >> n;
	ll l = 1, r = n;
	ll s = 1; ll r = n;
	while (l <= r) {

		ll m = (l + r) / 2;
		ll current = m * (m + 1) / 2;
		if (current <= n) {
			ans = m;
			l = m + 1;
		} else r = m - 1;
	} cout << ans << endl;

}



















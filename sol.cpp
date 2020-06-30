#include <bits/stdc++.h>

using namespace std;

const long int mxN = 1e5;
long int a[mxN], sum, cnt, ans;

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	cnt = ans = 0;
	for(int i = 0; i < n; i++){
		cnt++;
		if(i != n - 1 && a[i] > a[i+1]){
			ans += (cnt * (cnt + 1) / 2);
			cnt = 0;
		}
	}
	ans += (cnt * (cnt + 1) / 2);
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
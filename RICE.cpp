#include<bits/stdc++.h>

using namespace std;
int n, m;
long long x, y, r, u, ans = 0;
vector<long long> a(1000005), b(1000006);
int np(long long val){
	int i = 0, j = m - 1, mid;
	while (i <= j){
		mid = (i + j) / 2;
		if (b[mid] > val) j = mid - 1;
		else i = mid + 1;
	}
	if (b[mid] <= val) mid++;
	return mid;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("RICE.INP", "r", stdin);
    freopen("RICE.OUT", "w", stdout);
    cin >> n >> m >> x >> y >> r;
    for (int i = 0; i < n; i++){
    	cin >> u;
    	a[i] = (u - x) * (u - x);
	}
	for (int i = 0; i < m; i++){
    	cin >> u;
    	b[i] = (u - y) * (u - y);
	}
	sort(b.begin(), b.begin() + m);
	for (int i = 0; i < n; i++){
		ans += np(r * r - a[i]);
	}
	long long yay = abs(m * n - ans * 2);
	cout << yay;
    return 0;
}


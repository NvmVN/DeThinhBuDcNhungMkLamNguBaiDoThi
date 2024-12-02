#include<bits/stdc++.h>

using namespace std;
int n, u, v, ans = 0;
vector<int> a[1000006], luu(1000006, 0);
vector<bool> kt(1000006);
void dfs(int di){
	kt[di] = 1;
	for (int i = 0; i < a[di].size(); i++){
		if (!kt[a[di][i]]){
			dfs(a[di][i]);
			ans = max(ans, luu[di] + luu[a[di][i]] + 1);
			luu[di] = max(luu[di], luu[a[di][i]] + 1);
			kt[a[di][i]] = 1;
		}
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CHIATAY.INP", "r", stdin);
    freopen("CHIATAY.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i < n; i++){
    	cin >> u >> v;
    	a[u].push_back(v);
    	a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++){
		if (!kt[i]) dfs(i);
	}
	cout << ans;
    return 0;
}


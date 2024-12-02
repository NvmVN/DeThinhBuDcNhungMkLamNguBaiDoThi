#include<bits/stdc++.h>

using namespace std;
int n, ans = 0;
long long b;
vector<long long> a(1000005);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CONTEST.INP", "r", stdin);
    freopen("CONTEST.OUT", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int j = 0;
    for (int i = 0; i < n; i++){
    	cin >> b;
    	if (b < a[j]){
    		ans++;
    		j--;
		}
		j++;
	}
	cout << ans;
    return 0;
}


#include<bits/stdc++.h>

using namespace std;
int n;
string s, x;
bool kt(string a, string b){
	if (a.size() != b.size()) return 0;
	vector<bool> xh(1006);
	for (int i = 0; i < a.size(); i++){
		if (a[i] != b[i]){
			if (!xh[b[i]]) return 0;
		}
		xh[a[i]] = 1;
	}
	return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    cin >> n;
    cin.ignore();
    while (n--){
    	cin >> s >> x;
    	if (kt(s, x)) cout << "yes" << "\n";
    	else cout << "no" << "\n";
	}
    return 0;
}


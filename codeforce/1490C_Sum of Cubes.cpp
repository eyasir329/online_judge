#include<bits/stdc++.h>
using namespace std;

#define int long long
const int inf = LLONG_MAX>>1;
std::vector<int> precube;
void cube(){
	for(int i=1;i*i*i<=inf;i++){
		precube.push_back(i*i*i);
	}
}

void solve() {
	int x; cin >> x;
	for(int i=1;i*i*i<=x;i++){
		int a = i*i*i;
		int b = x-a;
		if(binary_search(precube.begin(),precube.end(),b)){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cube();
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
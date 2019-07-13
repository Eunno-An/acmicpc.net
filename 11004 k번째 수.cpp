#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//if you have time-limit problem..
//cin cout maybe the bad kid..
int main() {
	ios_base::sync_with_stdio(false);
	int n, k;
	vector<int> nList;
	cin >> n >> k;
	while (n--) {
		int a;
		cin >> a;
		nList.push_back(a);
	}
	sort(nList.begin(), nList.end());
	cout << nList[k - 1] << '\n';
	return 0;
}
#include<set>
#include<iostream>
using namespace std;

multiset<long long int> S;
// multiset is a data structure that allow redundant value in set.
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		while (k--) {
			char c;
			long long int n;
			cin >> c >> n;
			if (c == 'D') {
				if (S.empty()) {
					continue;
				}
				else if (n == -1) {
					S.erase(S.begin());
				}
				else if (n == 1) {
					S.erase(--S.end());
				}
			}
			else if (c == 'I') {
				S.insert(n);
			}
		}
		if (S.empty()) {
			cout << "EMPTY\n";
		}
		else {
			int min = *S.begin();
			int max = *(--S.end());
			cout << max << ' ' << min << '\n';
		}
		S.clear();
	}
	return 0;
}
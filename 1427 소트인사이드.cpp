#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	int N;
	vector<int> list;
	cin >> N;
	while (N != 0) {
		list.push_back(N % 10);
		N = N / 10;
	}
	sort(list.begin(), list.end(), greater<int>());
	for (int i = 0; i < list.size(); i++) {
		cout << list[i];
	}
	cout << '\n';
	return 0;
}
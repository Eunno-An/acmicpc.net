#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
using namespace std;

int main() {
	int N;
	map<long long, int > cards;
	map<long long, int>::iterator iter;
	cin >> N;
	while (N--) {
		long long int input;
		cin >> input;
		cout << "input key is : " << input << " and then before increasing value is : "
			<< cards[input] << ".\n";
		cards[input] = cards[input]++;
		cout << "After increasing value : " << cards[input] << '\n';

	}
	long long max = 0;//자료형 주의
	pair<long long, int> maxPair;
	for (iter = cards.begin(); iter != cards.end(); iter++) {
		if (max < iter->second ) {
			maxPair.first = iter->first;
			maxPair.second = iter->second;
			max = iter->second;
		}
		else if (max == iter->second) {
			if (maxPair.first > iter->first) {
				maxPair.first = iter->first;
				maxPair.second = iter->second;
				max = iter->second;
			}
		}
	}
	cout << maxPair.first << '\n';
	return 0;
}
#include<iostream>
#include<string>
#include<queue>
#include<functional>
using namespace std;
struct forQ {
	int stringSize;
	string word;
};
bool operator<(const forQ& a, const forQ& b) {
	if (a.stringSize == b.stringSize) {
		return a.word > b.word;
	}
	return a.stringSize > b.stringSize;
}
int main() {
	int N;
	forQ input;
	priority_queue<forQ, vector<forQ>> pq;
	vector<string> testRedundant;
	cin >> N;
	while (N--) {
		cin >> input.word;
		bool flag = false;
		for (int i = 0; i < testRedundant.size(); i++) {
			if (testRedundant[i] == input.word) {
				flag = true;
				break;
			}
		}
		if (flag) {
			continue;
		}
		input.stringSize = input.word.size();
		pq.push(input);
		testRedundant.push_back(input.word);
	}
	int pqSize = pq.size();
	for (int i = 0; i < pqSize; i++) {
		cout << pq.top().word << '\n';
		pq.pop();
	}
	return 0;
}
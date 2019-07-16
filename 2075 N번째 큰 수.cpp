#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);// without this line, time-out error occured
	priority_queue<int, vector<int>, greater<int> > pq;
	int N;
	cin >> N;
	int input = 0;
	for (int i = 0; i < N * N; i++) {
		cin >> input;
		if (pq.size() < N) {
			pq.push(input);
		}
		else if(pq.size() == N) {
			if (pq.top() < input) {
				pq.pop();
				pq.push(input);
			}
		}
	}
	cout << pq.top() << '\n';
	return 0;
}
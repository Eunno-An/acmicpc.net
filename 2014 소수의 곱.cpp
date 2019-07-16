#include<iostream>
#include<vector>
#include<queue>
#include<functional>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	int K, N;
	cin >> K >> N;
	vector<int> primeList;//primeList
	
	//notice the value type should be long long integer.
	priority_queue<long long int, vector<long long int>, greater<long long int> > pq;
	int input;
	for(int i=0; i<K; i++)	{
		cin >> input;
		primeList.push_back(input);
		pq.push(input);
	}
	while (--N) {
		long long int head = pq.top(); pq.pop();//min value of PQ
		for (int i = 0; i < K; i++) {
			pq.push(head * primeList[i]);
			if (head % primeList[i] == 0)// delete redundant value.
				//if the min value of PQ could devided primeList[i], break.
				//because next level maybe has redundant value (head * primeList[i]).
				//For ex, if push head * primeList[i] in PQ when head is 3, and primeList[i] 3,
				//and no break, also push head(3) * primeList[i](5)
				//the redundant value occured when head is 5 and primeList[i] is 3.
				break;
		}
	}
	cout << pq.top() << '\n';
	return 0;
}
#include<iostream>
#include<string>
#include<queue>
using namespace std;
struct forQ {
	int age;
	int count;
	string name;
};
bool operator<(const forQ& a, const forQ& b) {
	if (a.age == b.age) {
		return a.count > b.count;
	}
	return a.age > b.age;
}
int main() {
	int n;
	forQ person;
	int count = 0;
	priority_queue<forQ> pq;
	cin >> n;
	while (n--) {
		cin >> person.age >> person.name;
		person.count = count++;
		pq.push(person);
	}
	int pqSize = pq.size();
	for (int i = 0; i < pqSize; i++) {
		cout << pq.top().age << ' ' << pq.top().name << '\n';
		pq.pop();
	}
	return 0;
}
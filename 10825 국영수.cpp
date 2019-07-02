#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<cmath>
using namespace std;
//1. priority queue & struct 
//2. compare using operator overloading
struct studentInfo {
	string name;
	int l, e, m;
};
bool operator<(const studentInfo& a, const studentInfo& b) {
	if (a.l == b.l) {
		if (a.e == b.e) {
			if (a.m == b.m) {
				return a.name > b.name;
			}
			return a.m < b.m;
		}
		return a.e > b.e;
	}
	return a.l < b.l;
}
int main() {
	int N;
	string name;
	studentInfo si;
	priority_queue<studentInfo, vector<studentInfo> > pq;
	int l, e, m;
	cin >> N;
	while (N--) {
		cin >> si.name >> si.l >> si.e >> si.m;
		pq.push(si);
	}
	int pqSize = pq.size();
	for (int i = 0; i < pqSize; i++) {
		cout << pq.top().name << '\n';
		pq.pop();
	}
	return 0;
}
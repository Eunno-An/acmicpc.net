#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int N, M;
	set<string> noListen;
	string input;
	cin >> N >> M;
	while (N--) {
		cin >> input;
		noListen.insert(input);
	}
	int sameCount = 0;
	vector<string> sameList;
	pair<set<string>::iterator, bool> pr; // insert결과로 pair를 반환한다. 
	//set을 쓸 때 이 집합 안에 요소가 있는지 없는지를 판단하는데 중요한 method임
	while (M--) {
		cin >> input;
		pr = noListen.insert(input);
		if (!pr.second) {
			sameCount++;
			sameList.push_back(input);
		}
	}
	sort(sameList.begin(), sameList.end());
	cout << sameCount << '\n';
	for (int i = 0; i < sameList.size(); i++) {
		cout << sameList[i] << '\n';
	}
	return 0;
}

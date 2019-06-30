#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
	int n;
	stack<int> s;
	vector<int> list;
	vector<char> result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		list.push_back(input);
	}
	//스택에는 1부터 n까지 순서대로 넣어야 한다.
	//if s.top() < list[0] -> NO
	//else if(s.top() == list[0])
	//else (s.top() > list[0])
	int i = 1;
	while (!list.empty()) {
		if (s.size() == 0) {
			if (i > list[0]) {
				cout << "NO" << '\n';
				return 0;
			}
			for (i; i <= list[0]; i++) {
				s.push(i);
				result.push_back('+');
			}
			s.pop();
			result.push_back('-');
		}
		else {
			if (s.top() == list[0]) {
				s.pop();
				result.push_back('-');
			}
			else if (s.top() < list[0]) {
				for (i; i <= list[0]; i++) {
					s.push(i);
					result.push_back('+');
				}
				s.pop();
				result.push_back('-');
			}
			else if (s.top() > list[0]) {
				cout << "NO" << '\n';
				return 0;
			}
		}
		list.erase(list.begin());
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
	return 0;
}

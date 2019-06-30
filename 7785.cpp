#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
#include<map>
using namespace std;

int main() {
	map<string, bool> log;
	int n;
	cin >> n;
	while (n--) {
		string name, inOut;
		cin >> name >> inOut;
		if (inOut == "enter") {
			log.insert(make_pair(name, true));
		}
		else {
			log.erase(name);
		}
	}
	map<string, bool>::iterator it;
	vector<string> s;
	for (it = log.begin(); it != log.end(); it++) {
		s.push_back(it->first);
	}
	sort(s.begin(), s.end(), greater<string>());
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
}
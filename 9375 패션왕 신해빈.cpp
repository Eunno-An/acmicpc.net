#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		map<string, int> combination;
		int n;
		string input;
		string kindOfInput;
		cin >> n;
		int combiCount = 1;
		for(int i=0; i<n; i++){
			cin >> input >> kindOfInput;
			combination[kindOfInput]++;
		}
		map<string, int>::iterator iter;
		for (int i = 1;  i <= n; i++) {
			for (iter = combination.begin(); iter != combination.end(); iter++) {
				if (iter->second == i) {
					combiCount *= (iter->second+1);
					//wear A or wear B or .. wear NONE
				}
			}
		}
		//should wear anything
		cout << combiCount-1 << '\n';
	}
}
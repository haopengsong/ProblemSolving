#include <iostream>
#include <string>

using namespace std;

string reverseLeftKcharToTheEnd(string s, int k) {
	string res = "";
	for (int i = k; i < s.length() + k; i++) {
		res.push_back(s[i % s.length()]);
	}
	return res;
}

int main() {
	string input;
	int k;
	cin >> input;
	cin >> k;
	cout << reverseLeftKcharToTheEnd(input, k) << endl; 
	return 0;
}

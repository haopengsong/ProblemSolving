#include <iostream>
#include <vector>
#include <string>

using namespace std;

void dfs(int pos, string s, vector<int>& res, int n) {
	if (n == pos) {
		if (s != "") {
			res.push_back(stoi(s));
			cout << s << endl;
			return;
		}
	} else {
		for (int i = 0; i <= 9; i++) {
			if (s != "" || (s == "" && i != 0)) {
				s += to_string(i);
			}
			dfs(pos + 1, s, res,  n);
			s = s.substr(0, s.size() - 1);
		}
	}	
}

int main() {
	int n;
	cin >> n;
	vector<int> res;
	string s = "";
	dfs(0, s, res, n);
	return 0;
}

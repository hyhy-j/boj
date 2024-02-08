#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, r;
	string s;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> r >> s;
		for (char c : s) {
			for (int p = 0; p < r; ++p) cout << c;
		}
		cout << "\n";
	}
}
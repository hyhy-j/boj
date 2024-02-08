#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t, len;
	string str;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> str;
		len = str.length();
		cout << str[0] << str[len - 1] << "\n";
	}
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string c;
	int b;
	cin >> c >> b;

	int sum = 0;
	int len = c.length();

	for (int i = 0; i < len; ++i) {
		if (int(c[i]) >= 65) sum += (c[i] - 55) * pow(b, len - 1 - i);
		else sum += (c[i] - '0') * pow(b, len - 1 - i);
	}

	cout << sum << "\n";
}
#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int c;
		cin >> c;

		int q, d, n, p;
		q = c / 25;
		d = (c % 25) / 10;
		n = ((c % 25) % 10) / 5;
		p = ((c % 25) % 10) % 5;

		cout << q << " " << d << " " << n << " " << p << "\n";
	}
}
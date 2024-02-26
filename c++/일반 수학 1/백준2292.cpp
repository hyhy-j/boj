#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int start = 1;
	int count = 0;
	while (true) {
		int layer = start + count * 6;
		if (layer >= n) {
			cout << count +1 << "\n";
			break;
		}
		start = layer;
		count += 1;
	}
}
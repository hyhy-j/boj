#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;

	int cnt = 1;

	while (true) {
		if ((x - cnt) > 0) {
			x -= cnt;
			cnt += 1;
		}
		else {
			int above = cnt + 1 - x, under = x;
			if (cnt % 2 == 0) {
				int temp = above;
				above = under;
				under = temp;
			}
			cout << above << "/" << under << "\n";
			break;
		}
	}
 }
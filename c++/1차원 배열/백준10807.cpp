#include <iostream>
#include <algorithm> // algorithm 함수 정리
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, num,v;
	cin >> n;
	int numlist[n] = { 0 };

	for (int i = 0; i < n; ++i) {
		cin >> num;
		numlist[i] = num;
	}
	cin >> v;
	cout << count(numlist, numlist + n + 1, v);
}
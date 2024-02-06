#include <iostream>
#include <algorithm>
#define NUM 1000000
using namespace std;

int numlist[NUM] = { 0 };

int main()
{
	int n, num;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> num;
		numlist[i] = num;
	}
	int maxnum = *max_element(begin(numlist), numlist+n);
	int minnum = *min_element(begin(numlist), numlist+n);
	cout << minnum << " " << maxnum << "\n";
}
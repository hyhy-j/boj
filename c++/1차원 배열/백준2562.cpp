#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int numlist[9] = { 0 };
	int num;

	for (int i = 0; i < 9; ++i) {
		cin >> num;
		numlist[i] = num;
	}
	int maxnum = *max_element(numlist, numlist + 9);
	cout << maxnum << "\n" << find(numlist, numlist + 9, maxnum)- begin(numlist)+1<< "\n";
}
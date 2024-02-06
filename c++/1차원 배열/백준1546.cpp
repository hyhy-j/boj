#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, score;
	double sum = 0;
	double scorelist[1000] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> score;
		scorelist[i] = score;
	}
	
	int maxnum = *max_element(scorelist, scorelist + n);
	
	for (int i = 0; i < n; ++i) {
		scorelist[i] = scorelist[i] / maxnum * 100;
		sum += scorelist[i];
	}

	cout << fixed;
	cout.precision(3);
	cout << sum / n << "\n";
}
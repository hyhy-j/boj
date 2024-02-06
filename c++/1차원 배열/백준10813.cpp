#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, change1, change2, temp;
	int basket[100] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		basket[i] = i + 1;
	}

	for (int i = 0; i < m; ++i) {
		cin >> change1 >> change2;
		temp = basket[change1 - 1];
		basket[change1 - 1] = basket[change2 - 1];
		basket[change2 - 1] = temp;	
	}

	for (int i = 0; i < n; ++i) {
		cout<<basket[i]<<" ";
	}
	cout << "\n";
}
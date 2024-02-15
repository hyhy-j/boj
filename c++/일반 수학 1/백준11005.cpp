#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, b;
	cin >> n >> b;

	vector<int> arr;

	int quo = n / b, remain = n % b;
	arr.push_back(remain);

	while (quo!=0) {
		remain = quo % b;
		arr.push_back(remain);
		quo = quo / b;
	}

	for (int i = size(arr)-1; i >= 0; --i) {
		if (arr[i] >= 10) cout << char(arr[i] + 55);
		else cout << arr[i];
	}
	cout << "\n";
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;

	for (int i = 0; i < 10; ++i) {
		cin >> num;
		v.push_back(num%42);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size() << "\n";
}
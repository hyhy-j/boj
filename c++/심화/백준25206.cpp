#include <iostream>
#include <string>
using namespace std;

double alphatonum(char arr[]) {
	double num = 0;
	switch (arr[0]) {
	case 'A': 
		num = 4;
		break;
	case 'B': 
		num = 3;
		break;
	case 'C': 
		num = 2;
		break;
	case 'D':
		num = 1;
		break;
	case 'F': 
		num = 0;
		break;
	}

	if (arr[1] == '+') num += 0.5;

	return num;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double sum = 0, cnt = 0;
	for (int i = 0; i < 20; ++i) {
		string subject;
		char score[3];
		double size;
		cin >> subject >> size >> score;

		if (score[0] != 'P') {
			cnt += size;
			sum += size * alphatonum(score);
		}
	}

	cout << fixed;
	cout.precision(5);
	cout << sum / cnt << "\n";
}
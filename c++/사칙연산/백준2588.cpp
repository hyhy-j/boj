#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int three, four, five, six;
	cin >> a >> b;
	three = a * (b % 10);
	four = a * ((b / 10) % 10);
	five = a * (b / 100);
	six = three + four * 10 + five * 100;
	cout << three << endl << four << endl << five << endl << six << endl;
}
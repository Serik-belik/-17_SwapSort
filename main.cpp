#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	//swap(a, b);
	//cout << "swap(a, b) -> a " << a << " b " << b << endl;
	cout << "a " << a << " b " << b << " c " << c << endl;
	cout << "sort(a, b, c)" << endl;
	sort(a, b, c);
	cout << "a " << a << " b " << b << " c " << c << endl;

	return 0;
}

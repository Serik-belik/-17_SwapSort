#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	//int a;
	//int b;
	//int c;
	//cin >> a;
	//cin >> b;
	//cin >> c;
	////swap(a, b);
	////cout << "swap(a, b) -> a " << a << " b " << b << endl;
	//cout << "a " << a << " b " << b << " c " << c << endl;
	//cout << "sort(a, b, c)" << endl;
	//sort(a, b, c);
	//cout << "a " << a << " b " << b << " c " << c << endl;

	int Numbers[] = {1, 8, 15, 21, 10, 99, 69, 77, 55, 1};
	SwapSort(Numbers);

	for (int i = 0; i < 10; ++i) cout << Numbers[i] << " ";

	return 0;
}

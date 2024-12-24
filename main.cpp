#include <iostream>

using namespace std;

void swap(int& i1, int& i2) {
	int i_aux = i1;
	i1 = i2;
	i2 = i_aux;
}

void sort(int& i1, int& i2, int& i3) {
	if (i1 > i2) swap(i1, i2);
	if (i2 > i3) swap(i2, i3);
	if (i1 > i2) swap(i1, i2);
}

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

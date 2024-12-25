#include <iostream>
#include "Header.h"

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

void SwapSort(int (&numbers)[10]) {
	bool Flag;

	do {
		Flag = false;
		for (int i = 0; i < 9; ++i) {
			if (numbers[i] > numbers[i + 1]) {
				swap(numbers[i], numbers[i + 1]);
				Flag = true;
			}
		}
	} while (Flag);

}


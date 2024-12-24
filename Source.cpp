#include "Header.h"

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
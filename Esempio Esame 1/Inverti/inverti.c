#include <stdlib.h>

void Inverti_rec(int *v, int v_size, int i) {

	if (i == v_size/2)
		return;

	int tmp = v[i];
	v[i] = v[v_size - 1 - i];
	v[v_size - 1 - i] = tmp;

	Inverti_rec(v, v_size, i + 1);

}

void Inverti(int *v, int v_size) {

	Inverti_rec(v, v_size, 0);

}

int main(void) {
	int v[] = { 0,1,2,3,4,5 };

	int v_size = sizeof(v) / sizeof(int);

	Inverti(v, v_size);

	return 0;
}
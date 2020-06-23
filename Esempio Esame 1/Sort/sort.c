#include <stdlib.h>
#include <stdbool.h>

bool QuickSort(int *v, int v_size, int first, int last) {

	if (first < 0 || last >= v_size || last < first || v == NULL)
		return false;

	int i, j, pivot;
	if (first < last) {
		i = first; j = last;
		pivot = v[(first + last) / 2];
		do {
			while (v[i] < pivot)
				i++;
			while (v[j] > pivot)
				j--;
			if (i <= j) {
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
				i++; j--;

			}
		} while (i <= j);
		QuickSort(v, v_size, first, j);
		QuickSort(v, v_size, i, last);
	}
	return true;
}

int main(void) {

}
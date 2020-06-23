#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void BackTrack(char **nomi, int *vcurr, int i, int k, int *nsol) {


	for (int j = 0; j < k; j++) {
		vcurr[j] = i;
		
	}

}

int SottoGruppi(const char *filename, int k) {

	if (k <= 0)
		return -1;

	FILE *f = fopen(filename, "r");
	if (f == NULL)
		return -1;

	int nsol = 0;

	size_t check;

	char **nomi = malloc(sizeof(char*);

	for (int i = 0; !feof(f); i++) {
		nomi[i]=malloc(20)
		check = fscanf(f, "%s ", nomi[i]);
		nomi[i] = realloc(nomi[i], i * sizeof(char));

	}

	int *vcurr = malloc(k * sizeof(int));

	

	return nsol;
}

int main(void) {
	SottoGruppi("es4_input1.txt", 2);

	return 0;
}
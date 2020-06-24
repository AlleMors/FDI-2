#include <stdlib.h>
#include <stdio.h>

void Backtrack(size_t n, int i, int *vcurr) {

	if (i == n) {
		int cnt = 0;
		for (unsigned j = 0; j < n - 2; j++) {
			
			if ((vcurr[j]<vcurr[j + 1] && vcurr[j + 1]>vcurr[j + 2]) || (vcurr[j] > vcurr[j + 1] && vcurr[j + 1] < vcurr[j + 2])) {
				cnt++;
			}
			
		}
		if (cnt == n - 2) {
			printf("(");
			for (unsigned j = 0; j < n; j++) {
				
				printf("%d", vcurr[j]);
				if (j != n - 1)
					printf(", ");
			}
			printf("), ");
		}
		return;
	}

	for (unsigned j = 0; j < 3; j++) {
		vcurr[i] = j;
		Backtrack(n, i + 1, vcurr);
	}

}

void GolaCresta(size_t n) {
	int *vcurr = malloc(n * sizeof(int));
	Backtrack(n, 0, vcurr);

	free(vcurr);
}

int main(void) {
	GolaCresta(7);
	

	return 0;
}
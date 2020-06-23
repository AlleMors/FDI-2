#include <stdlib.h>
#include "liste_indirizzo.h"
#include <string.h>

list Filtra(list l, const char *citta) {
	list head = l;
	list tmp = l;
	for (int i = 0; l != NULL; i++) {
		if (strcmp(l->value.citta, citta) == 0) {
			if(i==0)
				l=Tail(l);
			else {
				tmp->next=l->next;
				l = tmp;
			}

		}
		else {
			l = l->next;
		}
	}
	return head;
}

int main(void) {
	list t = EmptyList();
	indirizzo j[] = { {"Matteotti",30,"Modena" },{"Marconi",3,"Sassuolo"},{"Gigli",23,"Modena"} };

	for (int i = 0; i < 3; i++) {
		t = InsertBack(t, &j[i]);
	}

	char città[] = "Sassuolo";

	Filtra(t, città);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

typedef struct list_ele* list;
typedef struct list_ele {
	int key;
	list next;
}l_ele_type;


/*
void swap(int *a, int *b) {
	int h;
	if ((*a % 2) != 0) {
		*b=(*b)+1;
	}
	h = *a;
	*a = *b;
	*b = h;
}
*/

void delete_n(list* l, int n) {
	if ((*l)->key == n) {
		*l = (*l)->next;
		free(*l);
	}
	if ((*l)->next == NULL)
		return;
	delete_n(&((*l)->next), n);
		
}

void eingabe(list* l) {

}




int main() {

	// Aufgabe 3.1.16; ua-160923-02
	/*
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	swap(&x, &y);
	printf("%i und %i", x, y);
	return 0 ;
	*/


	list t;
	t = (list)malloc(sizeof(l_ele_type));
	t->key = 2;

	int a;
	a = 1;
	delete_n(&t, a);
	return 0;
}
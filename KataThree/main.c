#include <stdio.h>
#include <stdlib.h>
#include "structPractice.h"

int main() {

	//creates a head node and dynamically allocates space for it
	myPizza* head;
	head = (myPizza*)malloc(sizeof(myPizza));


	createList(&head);
	//char* name;
	//int numOfSlices;
	//char* toppingOne;
	//char* toppingTwo;
	//node* myOrders;

	myPizza* pizza;
	for (int i = 1; i < 2; i++) {
		pizza = (myPizza*)malloc(sizeof(myPizza));
		pizza->name = "Sabrinas Pizza";
		pizza->numOfSlices = 10;
		pizza->toppingOne = "pepperoni";
		pizza->toppingTwo = "sausage";
		pizza->next = NULL;
		addToEnd(&head, pizza);
	}

	print(head);

	int n;
	do {
		printf("Enter (n > 0): ");
		scanf("%d", &n);
	} while (n < 1);

	printf("\nThe number you entered was: %d\n", n);

	return 0;


}
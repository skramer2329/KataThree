#include <stdio.h>
#include <stdlib.h>
#include "structPractice.h"

void createList(myPizza** head) {
	*head = NULL;
}

void addToEnd(myPizza** head, myPizza* endNode) {
	if (*head == NULL) {
		*head = endNode;
		endNode->next = NULL;
	}
		
	else {
		struct myPizza* i = NULL;
		for (i = *head; i != NULL; i = i->next) {
			if (i->next == NULL)
				i->next = endNode;
		}
	}
}

	//char* name;
	//int numOfSlices;
	//char* toppingOne;
	//char* toppingTwo;
	//node* myOrders;

void print(myPizza* head) {
	while (head) {
		printf("Name of Person: %s\n", head->name);
		printf("Num of slices: %d\n", head->numOfSlices);
		printf("Topping One: %s\n", head->toppingOne);
		printf("Topping Two: %s\n", head->toppingTwo);
		
		head = head->next;
	}
}
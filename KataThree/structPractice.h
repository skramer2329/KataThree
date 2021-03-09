#pragma once
typedef struct myPizza {
	char* name;
	int numOfSlices;
	char* toppingOne;
	char* toppingTwo;
	struct myPizza* next;
}myPizza;




void createList(myPizza** head);

void addToEnd(myPizza** head, myPizza* endNode);

void print(myPizza* head);
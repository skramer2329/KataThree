#pragma once
typedef struct myPizza {
	char* name;
	int numOfSlices;
	char* toppingOne;
	char* toppingTwo;
	node* myOrders;
}myPizza;

typedef struct node {
	node* next;
	int numOfOrders;
}node;


void createList(node** head);

void addToEnd(node** head, node* endNode);
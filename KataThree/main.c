#include <stdio.h>
#include <stdlib.h>
#include "structPractice.h"
#include <string.h>

int main() {

    //creates a head node and dynamically allocates space for it
    char buffer[1024];
    int numPizzas;
    myPizza* head;
    head = (myPizza*)malloc(sizeof(myPizza));


    createList(&head);
    //char* name;
    //int numOfSlices;
    //char* toppingOne;
    //char* toppingTwo;
    //node* myOrders;
    myPizza* pizza;
    for (int i = 1; i < 3; i++) {

        printf("\n");
        pizza = (myPizza*)malloc(sizeof(myPizza));

        printf("Enter name of customer: ");
        scanf("%s", buffer);
        pizza->name = strdup(buffer);

        printf("Enter number of pizzas: ");
        scanf("%d", &numPizzas);
        pizza->numOfSlices = numPizzas;

        printf("Enter topping one: ");
        scanf("%s", buffer);
        pizza->toppingOne = strdup(buffer);

        printf("Enter topping two: ");
        scanf("%s", buffer);
        pizza->toppingTwo = strdup(buffer);
        addToEnd(&head, pizza);
    }

    print(head);


    return 0;

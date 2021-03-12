#include <stdio.h>
#include <stdlib.h>
#include "structPractice.h"
#include <string.h>

int main() {

    char buffer[1024];
    int numPizzas;
    myPizza* head;
    head = (myPizza*)malloc(sizeof(myPizza));


    createList(&head);

    myPizza* pizza;
    for (int i = 1; i < 3; i++) {

        printf("\n");
        pizza = (myPizza*)malloc(sizeof(myPizza));

        printf("Enter name of customer: ");
        scanf("%s", buffer);
        pizza->name = strdup(buffer);

        printf("Enter number of pizzas: ");
        scanf("%d", &numPizzas);
        pizza->numOfOrders = numPizzas;

        printf("Enter topping one: ");
        scanf("%s", buffer);
        pizza->toppingOne = strdup(buffer);

        printf("Enter topping two: ");
        scanf("%s", buffer);
        pizza->toppingTwo = strdup(buffer);
        addToEnd(&head, pizza);
    }

    print(head);

    free(head->name);
    free(head->toppingOne);
    free(head->toppingTwo);
    free(head);


    return 0;
}
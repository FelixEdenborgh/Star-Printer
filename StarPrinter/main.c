#include <stdio.h>
#include <stdlib.h>
/**
    This program is going to print out stars on request, like if you say 5 it will print ***** stars :)
**/

int StarPrinter();
int main()
{
    int stars;

    printf("How many stars do you wonna print out?: ");
    scanf("%d", &stars);
    printf("You printed out %d Stars: ", stars);
    StarPrinter(stars);



    return 0;
}

int StarPrinter(int amount){
    for(int i = 1; i <= amount; i++){
        printf("*");
    }
    return 0;
}

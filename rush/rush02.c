#include <stdio.h>
#include "rush_print.h"
#include "unistd.h"

void rush(int number1, int number2){
    rush_print_2(number1,number2,'/','*','\\');
}

int main(){
    //test
    printf("test case 1:\n ");
    rush(0,1);
    printf("\n");

    printf("test case 2:\n ");
    rush(-2,2);
    printf("\n");

    printf("test case 3:\n");
    rush(2,2);
    printf("\n");

    printf("test case 4:\n");
    rush(4,4);
    printf("\n");

    printf("test case 5:\n");
    rush(5,5);
    printf("\n");

    printf("test case 6:\n");
    rush(5,1);
    printf("\n");

    printf("test case 7:\n");
    rush(1,5);
    printf("\n");

    printf("test case 8:\n");
    rush(3,4);
    printf("\n");
}
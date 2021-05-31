#include <stdio.h>

int check_exception(int number1,int number2){
    if(number1 < 0 || number2 < 0){
        return -1;
    }
    return 0;
}
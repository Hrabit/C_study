#include <stdio.h>
#include "unistd.h"
void rush(int number1, int number2){
    int test = 0;
    char o[2] = "o";
    char l[2] = "|";
    char h[2] = "-";
    char n[2] = "\n";
    char null[2] = " ";
    char b[2] = "\b";
    void *ptr_null = &null;
    void *ptr_o = &o;
    void *ptr_b = &b;
    void *ptr_l = &l;
    void *ptr_h = &h;

    if (number1 == 0 || number2 == 0){
        write(1,ptr_o,1);
        write(1,n,1);
    }    

    else if (number1 < 0 || number2 < 0){
        write(1,n,1);
    }

    else{
        for(int i = 0; i < number1; i++){

            for(int j = 0; j < number2 ;j++){
                
                if(i == 0 || i == number1-1){

                    // write(1,ptr_o,1);
                    if((j == number1-1) || (j == 0)){
                        write(1,ptr_o,1);
                    }
                    else{
                        write(1,ptr_h,1);
                    }
                }

                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,ptr_l,1);
                    }
                    else{
                        write(1,ptr_null,1);
                    }
                }

            write(1,n,1);
            }
        }
    }
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
}
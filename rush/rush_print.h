#include "unistd.h"
#include "exception.h"

void rush_print(int number1, int number2,char char_1,char char_2,char char_3){
    char empty = ' ';
    if(check_exception(number1,number2) == 0){
        if (number1 == 0 || number2 == 0){
        write(1,&char_1,1);
    }    
    
    else{
        for(int i = 0; i < number2; i++){

            for(int j = 0; j < number1 ;j++){
                
                if(i == 0 || i == number2-1){

                    if((j == number1-1) || (j == 0)){
                        write(1,&char_1,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }

                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,&char_3,1);
                    }
                    else{
                        write(1,&empty,1);
                    }
                }

            }
            write(1,"\n",1);
        }
    }
    }
    else{
        printf("can't print");
    }
}
// / * \ //

void rush_print_2(int number1, int number2,char char_1,char char_2,char char_3){
    char empty = ' ';
    if(check_exception(number1,number2) == 0){
        if (number1 == 0 || number2 == 0){
        write(1,&char_1,1);
    }    
    
    else{
        for(int i = 0; i < number2; i++){

            for(int j = 0; j < number1 ;j++){
                
                if(i == 0){

                    if(j == 0){
                        write(1,&char_1,1);
                    }
                    else if(j == number1 -1){
                        write(1,&char_3,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }
                else if(i == number2-1){
                    if(j == 0){
                        write(1,&char_3,1);
                    }
                    else if(j == number1 -1){
                        write(1,&char_1,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }
                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,&char_2,1);
                    }
                    else{
                        write(1,&empty,1);
                    }
                }

            }
            write(1,"\n",1);
        }
    }
    }
    else{
        printf("can't print");
    }
}
// A B C //
void rush_print_3(int number1, int number2,char char_1,char char_2,char char_3){
    char empty = ' ';
    if(check_exception(number1,number2) == 0){
        if (number1 == 0 || number2 == 0){
        write(1,&char_1,1);
    }    
    
    else{
        for(int i = 0; i < number2; i++){

            for(int j = 0; j < number1 ;j++){
                
                if(i == 0){

                    if((j == number1-1) || (j == 0)){
                        write(1,&char_1,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }

                else if(i == number2-1){

                    if((j == number1-1) || (j == 0)){
                        write(1,&char_3,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }

                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,&char_2,1);
                    }
                    else{
                        write(1,&empty,1);
                    }
                }

            }
            write(1,"\n",1);
        }
    }
    }
    else{
        printf("can't print");
    }
}

void rush_print_4(int number1, int number2,char char_1,char char_2,char char_3){
    char empty = ' ';
    if(check_exception(number1,number2) == 0){
        if (number1 == 0 || number2 == 0){
        write(1,&char_1,1);
    }    
    
    else{
        for(int i = 0; i < number2; i++){

            for(int j = 0; j < number1 ;j++){
                
                if(i == 0 || i == number2-1){

                    if(j == 0){
                        write(1,&char_1,1);
                    }
                    else if(j == number1-1){
                        write(1,&char_3,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }

                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,&char_2,1);
                    }
                    else{
                        write(1,&empty,1);
                    }
                }

            }
            write(1,"\n",1);
        }
    }
    }
    else{
        printf("can't print");
    }
}
void rush_print_5(int number1, int number2,char char_1,char char_2,char char_3){
    char empty = ' ';
    if(check_exception(number1,number2) == 0){
        if (number1 == 0 || number2 == 0){
        write(1,&char_1,1);
    }    
    
    else{
        for(int i = 0; i < number2; i++){

            for(int j = 0; j < number1 ;j++){
                
                if(i == 0){

                    if(j == 0){
                        write(1,&char_1,1);
                    }
                    else if(j == number1-1){
                        write(1,&char_3,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }
                }
                else if (i == number2-1)
                {
                    if(j == 0){
                        write(1,&char_3,1);
                    }
                    else if(j == number1-1){
                        write(1,&char_1,1);
                    }
                    else{
                        write(1,&char_2,1);
                    }    
                }

                else{
                    if((j == number1-1) || (j == 0)){
                        write(1,&char_2,1);
                    }
                    else{
                        write(1,&empty,1);
                    }
                }

            }
            write(1,"\n",1);
        }
    }
    }
    else{
        printf("can't print");
    }
}
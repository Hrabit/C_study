#include <stdio.h>
#include <unistd.h>

void jr_atoi(int number,char at){
    int ato = 2;
    int p = number / ato;
    int r = number % ato;
    int idx[500]; 
    int i = 0;
    if(at != '1'){
        while(p > 0){
            number = p;
            idx[i] = r;
            i++;
            p = number / ato;  
            r = number % ato;
        }
        idx[i] = r;
        while(i >= 0){
            printf("%d",idx[i]);
            i--;
        }
    }
}

int main(){
    int test = 168;
    char at = 2;
    //10101000
    jr_atoi(test,at);
}
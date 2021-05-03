#include <stdio.h>
void jr_strcat(char *c1,char *c2){
    while(*c1){
        c1++;
    }
    while(*c2){
        *c1 = *c2;
        c2++;
        c1++;
    }
}

int main(){
    char c1[30] = "abc";
    char c2[20] = "abf";

    jr_strcat(c1,c2);
    printf("%s",c1);
}

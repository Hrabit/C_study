#include <stdio.h>
#include <string.h>

char *jr_strcpy(char *dest, char *scr){
    int len = sizeof(scr);
    int idx = 0;
    while(idx < len){
        dest[idx] = scr[idx];
        idx++;
    }
}

int main(){
    char test_jr_strcpy[6];
    char test_message[6] = "Muyaho";
    jr_strcpy(test_jr_strcpy,test_message);
    printf("test_jr_strcpy >> %s",test_jr_strcpy);
}
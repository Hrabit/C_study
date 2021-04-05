#include <stdio.h>

void jr_strncpy(char *dest,char *src,unsigned int n){
    int idx = 0;
    while(idx < n){
        dest[idx] = src[idx];
        idx++;
    }
}

int main(){
    char message[7] = "muyaho~";
    char test_case[7];

    jr_strncpy(test_case,message,sizeof(test_case));
    printf("%s",test_case);
}
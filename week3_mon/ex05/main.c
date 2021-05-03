#include <stdio.h>
int compare(char *target,char *tango){
    int count = 0;
    while(*tango){
        if (*target != *tango){
            target -= count;
            tango -= count;
            return 0;
        }
        target++;
        tango++;
        count++;
    }
    target -= count;
    tango -= count;
    return 1;
}
int jr_strstr(char *target,char *tango){
    while(*target){
        if(*target == *tango){
            if(compare(target,tango) == 1){
                return target;
            }
        }
        target++;
    }
    return NULL;
}

int main(){
    char test[8] = "jonggang";
    char test2[8] = "ga";
    printf("%d\n",jr_strstr(test,test2));
}
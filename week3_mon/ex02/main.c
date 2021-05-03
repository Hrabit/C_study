#include <stdio.h>

int jr_strcmp(char c1[],char c2[]){
    int idx = 0;
    while (c1[idx]&&c1[idx])
    {
        if(c1[idx] != c2[idx]){
            goto Not_same;
        }
        idx++;
    }
    return 0;
Not_same:
    if((int)c1[idx] < (int)c2[idx]){
        return 1;
    }
    else return -1;
}

int main(){
    char c1[1] = "a";
    char c2[1] = "b";

    printf("%d %d %d",jr_strcmp(c1,c1),jr_strcmp(c1,c2),jr_strcmp(c2,c1));

    return 0;
}
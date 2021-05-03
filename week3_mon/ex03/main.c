#include <stdio.h>

int jr_strncmp(char c1[],char c2[],int len){
    int idx = 0;
    while (idx < len)
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
    char c1[3] = "abc";
    char c2[3] = "abf";

    printf("%d %d %d",jr_strncmp(c1,c2,1),jr_strncmp(c1,c2,2),jr_strncmp(c1,c2,3));

    return 0;
}
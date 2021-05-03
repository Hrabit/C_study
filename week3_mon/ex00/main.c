#include<stdio.h>


// write가 계속 오류가 나서 일단 printf로 대체해서 했습니다. 스터디 때 풀이 해주시면 감사하겠습니당!
void to_16(int number){
    int array[3];
    int q = number/16;
    int n = number%16;
    int i = 0;
    do{
        if(n < 10){
            array[i] = 48 + n;
            i++;
        }
        else{
            array[i] = 55 + n;
            i++;
        }
    }while(1 < q);
    while (-1 < i)
    {
        printf("%c",(char)(array[i]));
        i--;
    } 
}
void jr_putstr_non_printable(char s[]){
    int idx = 0;
    int temp = 0;
    while(s[idx]){
        temp = (int)(s[idx]);
        if(0 <= temp && temp < 32){
            to_16(temp);
        }
        else{
            printf("%c",s[idx]);
        }
        idx++;
    }
}
int main(){
    char test[11] = "\r1234aA";
    jr_putstr_non_printable(test);
    return 0;
}
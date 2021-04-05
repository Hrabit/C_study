#include <stdio.h>
int jr_str_is_alpha(char *str){
    int idx = 0;
    int num = 0;
    while (str[idx])
    {   
        num = (int)str[idx];
        if((((65 <= num)&&(num<=90))||(97<=num)&&(num<=122))!=1)
        {
            return 0;
        }
        idx++;
    }
    return 1;
}
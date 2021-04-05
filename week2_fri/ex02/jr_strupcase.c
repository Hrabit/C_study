char jr_strupcase(char *str){
    int idx = 0;
    int num = 0;
    while (str[idx])
    {
        num = (int)str[idx];
        if((97<=num)&&(num<=122)){
            num -= 32;
            str[idx] = (char)num;
        }
        idx++;
    }
    return str;
    
}
void jr_rev_int_tab(int *tab,int size){
    int idx;
    int count_left = 0;
    int count_right = size-1;
    do{
        idx = tab[count_left];
        tab[count_left] = tab[count_right];
        tab[count_right] = idx;
        count_left++;
        count_right--;
    }while(count_right > count_left);

}
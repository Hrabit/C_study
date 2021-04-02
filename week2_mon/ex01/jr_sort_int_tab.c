void jr_sort_int_tab(int *tab,int size){

    int idx;
    for(int i = 0;i < size;i++){

        for(int j = 0;j < i - 1;j++){

            if(tab[j] > tab[j+1]){

                idx = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = idx;

            }
        }
    }
}
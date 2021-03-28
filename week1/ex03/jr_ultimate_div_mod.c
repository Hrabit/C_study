void jr_ultimate_div_mod(int *a, int *b){

    int idx_a,idx_b;

    idx_a = *a;
    idx_b = *b;

    *a = idx_a/idx_b;
    *b = idx_a%idx_b;

};
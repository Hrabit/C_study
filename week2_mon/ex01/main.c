#include <stdio.h>
extern void jr_sort_int_tab(int *tab,int size);

int		main(void)
{
	int tab[9] = {30,5,2,3,4,8,16,20,24};
	jr_sort_int_tab(tab, 9);
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", tab[i]); 
	}
}
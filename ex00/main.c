#include <stdio.h>
extern void	jr_jr(int *nbr);

int main(void)
{
	int n;
	int *nbr;

	n = 1;
	nbr = &n;

	jr_jr(nbr);
	
	printf("%d\n", *nbr);

	return 0;
}
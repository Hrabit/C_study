#include <stdio.h>
extern void	jr_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	printf("정수 a b 를 한칸 띄고 입력해주세요 ex)1 2\n");
	scanf("%d %d",&a, &b);
	div = 0;
	mod = 0;
	jr_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return (0);
}
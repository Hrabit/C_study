#include <stdio.h>

extern void	jr_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	printf("정수 a b 를 한칸 띄고 입력해주세요 ex)1 2\n");
	scanf("%d %d",&a, &b);
	jr_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}
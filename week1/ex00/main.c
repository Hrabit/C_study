#include <stdio.h>
extern void jr_putstr(char *str);

int main(void)
{
	char str[255];

	printf("jr_putstr 함수로 출력할 문자열을 입력해주세요\n");
	scanf("%s", str);
	jr_putstr(str);
	return(0);
}
#include <stdio.h>

extern int jr_strlen(char *str);

int main(void)
{
	char str[255];
	int i;

	printf("문자의 개수를 셀 문자열을 입력해주세요\n");
	scanf("%s", str);
	i = jr_strlen(str);;
	printf("jr_strlen 함수로 센 문자의 개수는 %d 개 입니다.\n",i);
	return(0);
}
#include <stdio.h>
extern int jr_str_is_alpha(char *str);

int main()
{
	char *str = "hello";
	char *str2 = "hello?";

	printf("jr_str_is_alpha(hello) = %d\n",jr_str_is_alpha(str));
	printf("jr_str_is_alpha(hello?) = %d\n",jr_str_is_alpha(str2));
	return(0);
}
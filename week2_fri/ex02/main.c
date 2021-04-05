#include <stdio.h>
extern char *jr_strupcase(char *str);

int main()
{
	char str[] = "Upcase ?  1234";

	printf("jr_strupcase(Upcase ?  1234) = %s\n", jr_strupcase(str));
	return(0);
}
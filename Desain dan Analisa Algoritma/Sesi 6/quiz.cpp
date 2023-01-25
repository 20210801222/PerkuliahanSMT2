#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0;
	int *p = NULL ;
	*p = num1;
	*p = 4 ;
	++num2;
	num2 += *p;
	p = num2 ++ *p;
	printf (ld ld , num1, num2);
	printf (ld ld , *p, *p+num2);
	return 0
}

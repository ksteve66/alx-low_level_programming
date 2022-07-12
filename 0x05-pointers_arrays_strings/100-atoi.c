#include "main.h"

/**
* _atoi - Entry point
* @s: input
* Return: Always 0 (Success)
*/
int main(void)
{
	char str[10] = "122";
	int x = atoi(str);

	printf("Converting '122': %d\n", x);

	char str2[10] = "Hello!";

	x = atoi(str2);
	printf("Converting 'Hello!': %d\n", x);

	char str3[10] = "99Hello!";

	x = atoi(str3);
	printf("Converting '99Hello!': %d\n", x);}
	{
	return 0;
	}
}


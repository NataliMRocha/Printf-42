#include <stdio.h>

int main()
{
	char *teste = "natali";
	char *teste2 = "";
	char *teste3 = "NATALI 1253333";
	char *teste4 = NULL;
	char *teste5 = 0;
	
	int result = printf("%p\n", teste);
	printf("%i\n", result);
	int result2 = printf("%p", teste2);
	printf("%i\n", result2);
	int result3 = printf("%p", teste3);
	printf("%i\n", result3);
	int result4 = printf("%p", teste4);
	printf("%i\n", result4);
	int result5 = printf("%p", teste5);
	printf("%i", result5);

}
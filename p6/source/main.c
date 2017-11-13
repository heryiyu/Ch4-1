#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(void)
{
	int s[size];
	int j;

	printf("%s%13s\n", "Element", "Value");

	for (j = 0; j < 10; j++)
	{
		s[j] = 2 + 2 * j;
		printf("%7d%13d\n", j, s[j]);
	}

	printf("\n");
	system("pause");
	return 0;
}
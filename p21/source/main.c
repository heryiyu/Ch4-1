#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automatiArrayInit(void);

int main(void)
{
	printf("First call to each function: \n");
	staticArrayInit();
	automatiArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automatiArrayInit();

	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering ststicArrayInit: \n");
	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i] += 5);

}


void automatiArrayInit(void)
{
	int array2[3] = { 1, 2, 3 };
	int i;

	printf("\n\nValues on entering ststicArrayInit: \n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i] += 5);

}
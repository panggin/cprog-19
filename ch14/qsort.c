#include <stdio.h>
#include <stdlib.h>

int values[] = { 98, 23, 99, 37, 16 };

int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n;

	printf("정렬 전 배열: ");		// Before sorting
	for (n=0; n<5; n++)
		printf("%d ", values[n]);
	printf("\n");

	qsort(values, 5, sizeof(int), compare);

	printf("정렬 후 배열: ");		// After sorting
	for (n=0; n<5; n++)
		printf("%d ", values[n]);
	printf("\n");

	return 0;
}

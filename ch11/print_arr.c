#include <stdio.h>

int main()
{
	int arr[5] = {2,4,6,8,10};

	/* do program */
	int sum = 0;

	for (int i=0;i<5;i++) {
		printf("arr[%d] = %d\n",i,*(arr+i));	// print arr
		sum += *(arr+i);						// get sum
	}
	printf("sum = %d\n",sum);

	return 0;
}

#include<stdio.h>

int main(void)
{
	unsigned int num;
	printf("decimal:");
	scanf("%u", &num);

	unsigned int mask = 1<<7; //mask = 10000000
	printf("binary:");

	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	mask = mask>>1;
	((num&mask)==0)?printf("0"):printf("1");
	printf("\n");

	return 0;
}

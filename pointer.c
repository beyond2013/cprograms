#include<stdio.h>
int main(void)
{
	int counter=4;
	int *ptrcounter = &counter;
	printf("\ncounter contains %d ", counter);
	printf("\t new value of counter is %d", ++(*ptrcounter));
}


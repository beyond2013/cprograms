#include <stdio.h>

void sequence(int N);

int main()
{
  int loop = 0;
	for(loop =0; loop <= 6; loop++)
	{
		sequence(loop);
	}
	return 0;
}

void sequence(int N)
{
	int firstNumber, nextNumber;
	int loop, counter;
	firstNumber = N * 3;
	printf("\n %d", firstNumber);
  loop = (N+1) * 2 - 1;
  for(counter=0; counter <loop; counter++)
	{
		nextNumber = firstNumber + 2;
		printf("\t %d", nextNumber);
		firstNumber = nextNumber;
	}
	printf("\n");
}

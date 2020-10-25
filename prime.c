#include <stdio.h>
int main(void)
{
	int num, counter ;
	int composite;
	int loop;
	do
	{
		composite = 0;
		printf("\n Enter a number\t ");
		scanf("%d", &num);
		for(counter=2; counter<=num; counter++)
		{
			if(num % counter == 0)
			{
				composite++;
			}
			if(composite>=2) break; 
		}
		if(composite<2)
		{
			printf("\n %d is prime", num);
		}
		else
		{
			printf("\n %d is composite", num);
		}

		printf("\n Press 1 to continue \t ");
		scanf("%d", &loop);
	}while(loop==1);
  puts("program finished executing");
	return 0;
}

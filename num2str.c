#include<stdio.h>
#include<math.h>
char* n2w(int rem);
int main()
{ 

	int number,divisor=10, remainder;
	int digits=1;
	int loop;

	char hundreds[1][8] = {"hundred"};
	char thousands[1][9] = {"thousand"};

	printf("\n Enter a number \t ");
	scanf("%d", &number);


	while(number / divisor !=0)
	{
		digits++;
		divisor*=10;
	}

	/* printf("\n%d has %d digits",number, digits); */

	divisor=10;

	for(loop=1;loop<=digits; loop++)
	{
		remainder = number % divisor;
		printf("\n%d %% %d = %d \t %s",number, divisor, remainder, n2w(remainder));
		/* printf("\n in main %s\n\n", n2w(remainder)); */
		number/=divisor;
	}

printf("\n");

	return 0;
}

char* n2w(int rem)
{
	char units[10][10]= {"\0","one\0", "two\0", "three\0", "four\0", "five\0", "six\0", "seven\0", "eight\0", "nine\0"};
	char tens[18][11]= {"ten", "eleven", "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
	                 "eighteen", "nineteen", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char* result = units[rem];
	printf("\nin function %s",  result);
	return(result);
}


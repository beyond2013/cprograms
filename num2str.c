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

	printf("\n%d has %d digits",number, digits);

	divisor=10;

	for(loop=1;loop<=digits; loop++)
	{
		remainder = number % divisor;
		printf("\n%d %% %d = %d \t %s",number, divisor, remainder, n2w(remainder));
		number/=divisor;
	}



	return 0;
}

char* n2w(int rem)
{
	char units[20][10]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"
                       "eleven", "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
	                     "eighteen", "nineteen", "twenty"}
	char tens[9][8]= {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char* result= units[rem-1];
	return(result);
}


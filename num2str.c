#include<stdio.h>
#include<math.h>
void n2w(int rem);
int main()
{ 

int number,divisor=10, remainder;
int digits=1;
int loop;

char tens[17][10] = { "eleven", "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
	"eighteen", "nineteen", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
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
	printf("\n%d %% %d = %d ",number, divisor, remainder);
  n2w(remainder);	
	number/=divisor;
}



return 0;
}

void n2w(int rem)
{
	char units[9][6]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	printf("\t %s", units[rem-1]);
}


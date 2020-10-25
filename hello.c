#include <stdio.h>
 
int main() {
	char operator='+';
	int first=0, second=0;
	printf("Enter first number");
        scanf("%d", &first);

	printf("Enter second number");
        scanf("%d", &second);
	
        printf("Enter operator: (+, -, *, /)");
	//do{
		scanf(" %c", &operator);
//	}
 //       while(operator == '+' || operator== '-' || operator=='*' || operator=='/');
       printf("you selected %c operator", operator);
	switch(operator){
		case '*' :
			printf("%d %c %d = %d", first, operator, second, first * second);
			break;
		case '+' :
			printf("%d %c %d = %d", first, operator, second, first + second);
			break;
		case '-' :
			printf("%d %c %d = %d", first, operator, second, first - second);
			break;
		case '/' :
			printf("%d %c %d = %d", first, operator, second, first / second);
			break;
		default :
			printf("Invalid operator %c", operator);
	}

    return 0;
}


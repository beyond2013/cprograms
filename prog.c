#include<stdio.h>
int main()
{ 
  float num1, num2;
  char op, cont='y';
  while(cont=='y')
  {
    scanf(" %f %c %f",&num1,&op,&num2);
    if (op=='+')
      printf("%.3f \n",num1+num2);
    else if(op=='-')
      printf("%.3f \n",num1-num2);
    else if(op=='*')
      printf("%.3f \n",num1*num2);
    else if(op=='/')
    {
      if(num2==0)
        printf("Look where you put your zeroes\n");
      else
        printf("%.3f\n",num1/num2);
    }
    else if(op=='%')
      printf("%d\n",(int)num1%(int)num2);
    else 
    {
      printf("What was the crap you just entered?\n");
    }
    printf("Continue using calc?[y/n]");
    scanf(" %c", &cont);
    if (cont=='n')
      break;
  }

  return 0;
}

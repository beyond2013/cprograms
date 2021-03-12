#include <stdio.h>
#define SIZE 5
int min(int ary[]);

int main()
{
	int ary[]={4,6,8,10,12};
  /* printf("%d\n", min(ary)); */

	return 0;
}

int min(int ary[])
{
	int i, result=ary[0];

  for (i = 1; i < SIZE; ++i)
	{
		if(ary[i] < result)
		{
			result= ary[i];
		}
  }
	
	return result;
}

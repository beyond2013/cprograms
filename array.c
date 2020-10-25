#include<stdio.h>
int main()
{ 
	int marks[10]={10,14,15,16,18,11,20,21,11,10};
	int counter;
	int item=24;
  //traverse array
	for(counter=0;counter <=9; counter++)
	{
		printf("%d\n", marks[counter]);
	}

	// linear search

	for(counter=0;counter<=9;counter++)
	{
    if(item == marks[counter])
		{
			printf("%d, found at %d location of array", item, counter);
			break;
		}
 }
	if(counter ==10)
	{
		printf("%d item not found\n", item);
	}


}



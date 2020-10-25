#include <stdio.h>

char convert(char c)
{
	return c + 32;
}

int main() {
	char c='A';
	printf("\nvalue of c = %c", c);
	printf("\nconvert(c) = %c", convert(c));
    return 0;
}


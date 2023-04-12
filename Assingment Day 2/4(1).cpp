#include <stdio.h>

int main(void) 
{ 
	const int j = 20; 
	const int *ptr = &j;
	printf("*ptr: %d\n", *ptr); 
	return 0; 
}


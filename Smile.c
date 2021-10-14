#include <stdio.h>

int Smile (void);

int main (void)
{
	Smile(); Smile(); Smile();
	printf("\n");
	
	Smile();Smile();
	printf("\n");
	
	Smile();
	printf("\n");
	
	return 0;
}

int Smile (void)
{
	printf("Smile!");
	
	return 0;
}

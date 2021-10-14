#include <stdio.h>
#define Name "Dongjie Wang"
#define Address "1034 Almarida Dr, San Jose, CA 95128"

int main(void)
{
	
	printf("%s\n", Name);
	getchar();
	printf("%s\n", Address);
	
	getchar();
	
	int Age=23;
	printf("Age: %d year.\nTotal %d days.", Age, Age*365);
	
	
	
	return 0;
	
}

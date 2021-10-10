#include <stdio.h>

int main(){
	int price=0;
	int AMOUNT=0;
	
	printf("Value:"); 
	scanf("%d",&AMOUNT);
	
	printf("Price:");
	scanf("%d",&price);
	
	int change =0-(AMOUNT - price);
	
	printf("Change%d.\n", change);
	
	return 0;
}

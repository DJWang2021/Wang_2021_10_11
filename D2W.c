#include <stdio.h>

int main(){
	
	int a=0;
	
	printf("����һ����λ��:");
	scanf("%d", &a);
	
	int b=a/100;
	int c=(a-b*100)/10;
	
	int d=a%10;
	
	printf("%d", d*100+c*10+b);
	
	return 0;
}

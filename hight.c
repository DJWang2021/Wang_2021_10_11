#include <stdio.h>

int main(){
	
	double a;
	double b;
	
	printf("输入身高:\n");
	scanf("%lf %lf", &a,&b);
	
	printf("身高是%f米。",
	((a+b/12)*0.3048));
	
	return 0;
	
}
	


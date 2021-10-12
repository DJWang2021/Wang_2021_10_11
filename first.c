#include <stdio.h>  //<stdio.h>是c语言编辑器中的编译软件包中的标准部分，提供键盘输入和屏幕输出。 

int main(void){  //void ‘空的’ 表明 main 不含任何参数 
	
	int num;
	num=1;
	
	printf("I am a simple ");
	printf("Computer.\n");
	printf("My favorite number is %d because it is first.\n", num);
	
	getchar();
	
	return 0;
} 

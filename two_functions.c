#include <stdio.h>  

	void butler(void); //ANSI/ISO 函数原型 (prototype) 告诉编译器要使用这个函数 , 第一个 void 表示 butler 没有返回值，第二个 void 表面 butler 没有参数 
	
		int main(void)
		{
			printf("I will summon the butler function.\n");
			butler(); //函数调用 （function call) 
			printf("Yes. Bring me some tea and wrireable DVDs.\n");
			
			return 0;
		}
		
	void butler(void) //函数定义 （function definition） 
	{
		printf("You rang, sir?\n");
		}	
			
		  

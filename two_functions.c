#include <stdio.h>  

	void butler(void); //ANSI/ISO ����ԭ�� (prototype) ���߱�����Ҫʹ��������� , ��һ�� void ��ʾ butler û�з���ֵ���ڶ��� void ���� butler û�в��� 
	
		int main(void)
		{
			printf("I will summon the butler function.\n");
			butler(); //�������� ��function call) 
			printf("Yes. Bring me some tea and wrireable DVDs.\n");
			
			return 0;
		}
		
	void butler(void) //�������� ��function definition�� 
	{
		printf("You rang, sir?\n");
		}	
			
		  

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;
	char c;
	
	printf("���ڸ� �Է��� �ּ���.:");
	while((c=getchar()) !='\n')
	{
		if(c>=48 && c<=57)
			a = a+1; 
	 } 
	
	printf("���ڴ� %d�� �Դϴ�.\n",a);	 
	return 0;
}

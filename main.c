#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;
	char c;
	
	printf("문자를 입력해 주세요.:");
	while((c=getchar()) !='\n')
	{
		if(c>=48 && c<=57)
			a = a+1; 
	 } 
	
	printf("숫자는 %d개 입니다.\n",a);	 
	return 0;
}

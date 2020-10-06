#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int a;
	int b=0;
	do{
		printf("숫자를 입력해 주세요.:");
		scanf("%d",&a);
		if(a>answer){
		
			printf("low!\n");
		}
		else if(a<answer){
		
			printf("high!\n");
		}
		b++;
		
	}while(a!=answer);
		printf("congratulation, number of trial:%d\n",b);
	return 0;
}

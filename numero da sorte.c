#include <stdio.h>
int main(){
	int n;
	printf("Qual e o numero q estou a pensar?\n");
	scanf("%d",&n);
	if(n!=7){
		printf("Errado!");
	}else{
		printf("Certo!");
	}
}
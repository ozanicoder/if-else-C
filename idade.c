#include <stdio.h>
int main (){
	int idade;
	printf("Insira a sua idade:\n");
	scanf("%d",&idade);
	if(idade >= 18){
		printf("Já podes ir preso, cuidado");
	} else{
		printf("aproveita a vida de menor, enquanto podes");
	}
}

#include <stdio.h>
int main (){
	int n_d_fil;
	printf("Insira o nº de filhos:\n");
	scanf("%d",&n_d_fil);
	if(n_d_fil >=1 && n_d_fil<=10){
		printf("Vc tem um numero aceitavel de filhos,pode entrar na cidade");
	}else{
		printf("Vc tem um numero inaceitavel de filhos, n pode entrar na cidade");
	}
}
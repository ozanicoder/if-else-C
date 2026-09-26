#include <stdio.h>
int main(){
	int n_jog;
	printf("Quantos jogadores tem a tua equipa?\n");
	scanf("%d",&n_jog);
		if(n_jog==2 || n_jog==4){
		printf("numero de jogadores valido! Pode entar no campeonato");
	}else{
		printf("numero de jogadores invalido! n pode entrar no campeonato");
	}
}
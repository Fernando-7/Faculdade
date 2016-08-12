#include<stdio.h>

enum tipo_resposta{LIXEIRA,SEGUNDA_CHANCE,CASAR};

typedef struct {

	*nome;
	enum tipo_resposta tipo;

} resposta;


void lixeira(resposta r){

	printf("Dear %s,\n",r[i].nome);
	printf("Se fudeu\n");
}

void segunda_chance(resposta r){
	printf("Dear %s,\n",r[i].nome);
	printf("segunda chance aee\n");

}

void casar(resposta r){
	printf("Dear %s,\n",r[i].nome);
	printf("casar se lenhou\n");

}

void (*funcoes[])(resposta) = {lixeira,segunda_chance,casar};

int main(){

	resposta r[] = {

		{"Mike",LIXEIRA},{"Luis",SEGUNDA_CHANCE},{"mARIO",CASAR},{"PAULO",CASAR}
	};	

	int i;
	for(i =0; i < 4;i++){
		(funcoes[r[i].tipo])(r[i]);
	}

	return 0;
}

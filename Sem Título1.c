#include<stdio.h>

int qtdeCaminhao;
int producao;
double producaoInicial;

int main(){
	int capacidadeTotal;
	double capacidade, quilometro, valorPorKM, valorTotal, valorTransp;
	printf("\nDigite o peso da producao em toneladas(ex: 45, 67.3, 24, ...): ");
	scanf("%i", &producao);
	producaoInicial = producao;
	printf("\nDigite a capacidade total da frota de caminhoes em toneladas(ex: 43, 65, 21, ...): ");
	scanf("%i", &capacidadeTotal);
	if(capacidadeTotal < producao){
		printf("\nEmpresa nao apta");
	}
	else{
		printf("\nEmpresa apta");
		printf("\nDigite a quantidade de caminhoes: ");
		scanf("%i", &qtdeCaminhao);
		int x;
		for(x=0;x<qtdeCaminhao;x++){
			printf("\nProducao restante: %i",producao);
			printf("\nDigite a capacidade em toneladas: ");
			scanf("%lf",&capacidade);
			printf("\nDigite o km que ira percorrer: ");
			scanf("%lf",&quilometro);
			printf("\nDigite o valor da tonelada por Km rodado: ");
			scanf("%lf",&valorPorKM);
			if(capacidade>45){
				valorTransp=(capacidade*quilometro)*(valorPorKM*0.75);
			}else{
				valorTransp=(capacidade*quilometro)*(valorPorKM);
			}
			valorTotal+=valorTransp;
			producao-=capacidade;
		}
		printf("\nSafra inicial: %.2lf\n", producaoInicial);
		printf("Quantidade de caminhoes: %i\n", qtdeCaminhao);
		printf("Valor total: %.2lf\n", valorTotal);
	}
	
	return 0;
}

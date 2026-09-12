
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

	int pecas, prontuario, funcionarios, i, prontuario_maior;
	float salario, salario_minimo;
	char sexo;
	float total_folha = 0.0, maior_salario = 0.0;
	int cont_homens = 0, cont_mulheres = 0, soma_pecas_homens = 0, soma_pecas_mulheres = 0;


	//coletando dados iniciais
	printf("digite o valor do salario minimo atual: ");
	scanf("%f", &salario_minimo);

	printf("Quantidade de funcionarios a registrar: ");
	scanf("%d", &funcionarios);


	//laço de repetição
	for (i=0; i<funcionarios; i++) {
		printf("funcionario %d\n", i+1);

		printf("prontuario numero: ");
		scanf("%d", &prontuario);

		do {
			printf("sexo M ou F: ");
			scanf(" %c", &sexo);
			sexo=toupper(sexo);

			if(sexo != 'M' && sexo!='F') {
				printf("opcao invalida, tente novamente\n");
			}
		} while(sexo!='M' && sexo!='F');

		printf("numero de pecas produzidas: ");
		scanf("%d", &pecas);


		//calculo de salarios
		if(pecas<=30) {
			salario=salario_minimo;
		} else if (pecas <= 35 ) {
			salario=salario_minimo+(pecas-30)*(salario_minimo*0.03);
		} else {
			salario=salario_minimo+(pecas-30)*(salario_minimo*0.05);
		}
		printf("salario calculado: R$ %f\n", salario);


		//atualizando os totais
		total_folha=total_folha+salario;

		if(salario>maior_salario) {
			maior_salario=salario;
			prontuario_maior=prontuario;
		}

		//separando peças por sexo para a média
		if (sexo == 'm') {
			soma_pecas_homens=soma_pecas_homens+pecas;
			cont_homens++;
		}

		if(sexo == 'f') {
			soma_pecas_mulheres=soma_pecas_mulheres+pecas;
			cont_mulheres++;
		}
	} //fechamento da chave do for


	//exibição dos resultados finais
	printf("relatorio final da fabrica\n");
	printf("total da folha de pagamento: R$%f\n", total_folha);

	if(cont_mulheres>0) {
		printf("media de pecas fabricadas por mulheres: %f", soma_pecas_mulheres/cont_mulheres);
	} else {
		printf("media de pecas fabricadas por mulheres = 0\n");
	}

	if(cont_homens>0) {
		printf("media de pecas fabricadas por homens: %f\n", soma_pecas_homens/cont_homens);
	} else {
		printf("media de pecas fabricadas por homens: 0\n");
	}

	printf("prontuario do maior salario: %d", prontuario_maior);

	return 0;

}






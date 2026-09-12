#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {


	int vetor[10];
	int qntd_impares = 0;
	int soma_pares = 0;


	printf("Digite 10 numeros inteiros:\n");

	for(int i=0; i<10; i++) {

		printf("Digite o numero %d: ", i+1);
		scanf("%d", &vetor[i]);

		if(vetor[i] % 2 == 0) {
			soma_pares+=vetor[i];

		} else {
			qntd_impares++;
		}
	}


	printf("Quantidade de impares %d\n", qntd_impares);
	printf("Soma pares: %d\n", soma_pares);

	return 0;

}





#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int Numero;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite número inteiros ou 0 para sair: \n");
	scanf("%d",&Numero);
	while(Numero!=0)
	{
		scanf("%d",&Numero);
	}
	printf("Fim do Laço\n");
	system("pause");
	return 0;
}

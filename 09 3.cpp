#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int Numero;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite n�mero inteiros ou 0 para sair: \n");
	scanf("%d",&Numero);
	while(Numero!=0)
	{
		scanf("%d",&Numero);
	}
	printf("Fim do La�o\n");
	system("pause");
	return 0;
}

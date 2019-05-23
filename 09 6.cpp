#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	float NumeroAbilio, Soma=0;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: \n");
	while(1)
	{
		scanf("%f",&NumeroAbilio);
		if(NumeroAbilio==0)
			break;
			
		Soma=Soma+NumeroAbilio;
	}
	printf("Total acumulado: %.2f",Soma);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int NumeroDeNotasDigitadas=0;
	float Notas, Soma=0, Media;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite notas ou -1 para sair\n");
	while(1)
	{
		scanf("%f",&Notas);
		if(Notas==-1)
			break;
		
		Soma=Soma+Notas;
		NumeroDeNotasDigitadas = NumeroDeNotasDigitadas +1;
	//	printf("Soma: %.2f\n",Soma);
	//	printf("Numero de notas digitadas: %d\n", NumeroDeNotasDigitadas);
	}
	Media=Soma/NumeroDeNotasDigitadas;
	printf("Média Final: %.2f\n",Media);
	//printf("Numero de notas digitadas: %d\n", NumeroDeNotasDigitadas);
	system("pause");
	return 0;
}

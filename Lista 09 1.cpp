#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
	int Numero;
	setlocale(LC_ALL,"Portuguese");
	Numero=5;
	printf("Números inteiros entre 5 a 15: ");
	while(Numero <= 15)
	{	
		printf("%d ",Numero);
		Numero++;
	}
	printf("\n");
	system("pause");
	return 0;
	
}

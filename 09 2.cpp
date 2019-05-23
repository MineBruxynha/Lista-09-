#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int Numero=100;
	setlocale(LC_ALL,"Portuguese");
	printf("Numeros pares de:");
	while(Numero<=140)
	{
	    printf("%d ",Numero);
	    Numero=Numero+2;
	}
	system("pause");
	return 0;
	
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	float Quantidade, Preco, Soma=0;
	setlocale(LC_ALL,"Portuguese");
	while(1)
	{
		printf("Quantidade: ");
		scanf("%f",&Quantidade);
		
		if(Quantidade==0)
			break;
			
		printf("Preço: ");
		scanf("%f",&Preco);
		
		Soma=Soma+(Quantidade*Preco);
	}
	printf("Total da Nota: R$ %.2f\n",Soma);

	system("pause");
	return 0;	
}


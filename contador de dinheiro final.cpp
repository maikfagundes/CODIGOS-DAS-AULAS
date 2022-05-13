#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	
	float c5, c10, c25, c50, c1, r2, r5, r10, r20, r50, r100, r200, caixa, valor_em_caixa, quebra;
	
	valor_em_caixa = r2 + r5 + r10 + r20 + r50 + r100 + r200;
	quebra=caixa+valor_em_caixa;
	
		printf ("quantos reais/centavos em moedas de 5 voce tem?:\n");
		scanf("%f", &c5);
		
			printf ("quantos reais/centavos em moedas de 10 voce tem?:\n");
		scanf("%f", &c10);
		
			printf ("quantos reais/centavos em moedas de 25 voce tem?:\n");
		scanf("%f", &c25);
		
			printf ("quantos reais/centavos em moedas de 50 voce tem?:\n");
		scanf("%f", &c50);
	
			printf ("quantos reais/centavos em moedas de 1 real voce tem?:\n");
		scanf("%f", &c1);
	
	
	
	printf ("quantas reais em notas de 2 vossa senhorita tem?:\n");
		scanf("%f", &r2);
	
		printf ("quantas reais em notas de 5 reais voce tem?:\n");
	scanf("%f", &r5);
	
	
		printf ("quantas reais em notas de 10 reais voce tem?:\n");
	scanf("%f", &r10);
	
		printf ("quantas reais em notas de 20 reais vocetem?:\n");
	scanf("%f", &r20);
	
		printf ("quantas reais em notas de 50 reais voce tem?:\n");
	scanf("%f", &r50);
	
		printf ("quantas reais em notas de 100 reais voce tem?:\n");
	scanf("%f", &r100);
	
		printf ("quantas reais em notas de 200 reais voce tem?:\n");
	scanf("%f", &r200);
	
	valor_em_caixa = c5 + c10 + c25 + c50 + c1 +r2 + r5 + r10 + r20 + r50 + r100 + r200;
	quebra=caixa+valor_em_caixa;
	
	printf("seu caixa está com saldo de: %f\n", valor_em_caixa);
	
	printf ("digite o valor que o caixa está pedindo:\n");
	scanf("%f", &caixa);
	
	//processamento
	
	quebra = (valor_em_caixa - caixa);
	
	
	if (quebra <= 1)
	{
	

	printf ("seu caixa está quebrando em: %f\n", quebra);
}
	else{
	
	printf("seu caixa está sobrando em: %f\n", quebra);

}
	
	system("PAUSE");
	
	
	return 0;
}

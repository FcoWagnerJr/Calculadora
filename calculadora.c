#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float a,b;
	int op;
	printf("1 - soma \n");
	printf("2 - subtração \n");
	printf("3 - multiplicação \n");
	printf("4 - divisão \n");
	printf("Digite sua opção: ");
	scanf("%i", &op);
	printf("digite um valor real: ");
	scanf ("%f", &a);		
	printf("digite outro valor real: ");
	scanf ("%f", &b);
	switch(op){
		case 1:
			printf("A soma é igual à: %.0f", a + b);
			break;
			case 2:
			printf("A subtração é igual à: %.0f", a - b);
			break;
			case 3:
			printf("A multiplicação é igual à: %.0f", a * b);
			break;
			case 4:
			if(b==0){
				printf("A divisão é indefinida! ");
			}
				else{
					printf("A divisão é igual  à: %.0f", a / b);
				}
		}
			return(0);
	}
	
	

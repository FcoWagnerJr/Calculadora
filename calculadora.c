#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float a,b;
	int op;
	printf("1 - soma \n");
	printf("2 - subtra��o \n");
	printf("3 - multiplica��o \n");
	printf("4 - divis�o \n");
	printf("Digite sua op��o: ");
	scanf("%i", &op);
	printf("digite um valor real: ");
	scanf ("%f", &a);		
	printf("digite outro valor real: ");
	scanf ("%f", &b);
	switch(op){
		case 1:
			printf("A soma � igual �: %.0f", a + b);
			break;
			case 2:
			printf("A subtra��o � igual �: %.0f", a - b);
			break;
			case 3:
			printf("A multiplica��o � igual �: %.0f", a * b);
			break;
			case 4:
			if(b==0){
				printf("A divis�o � indefinida! ");
			}
				else{
					printf("A divis�o � igual  �: %.0f", a / b);
				}
		}
			return(0);
	}
	
	

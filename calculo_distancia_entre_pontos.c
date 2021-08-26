#include<stdio.h>
#include<math.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x1, x2, y1, y2;
	float distancia;
	
	printf("\n Digite o valor de x1: ");
	scanf("%f",&x1);
	
	printf("\n Digite o valor de y1: ");
	scanf("%f",&y1);
	
	printf("\n Digite o valor de x2: ");
	scanf("%f",&x2);
	
	printf("\n Digite o valor de y2: ");
	scanf("%f",&y2);
	
	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("\n A distância entre os pontos P e Q é: %.2f \n.", distancia);
}

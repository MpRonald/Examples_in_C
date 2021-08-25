// programa para ler a base e a altura de um triangulo
// e calcular a area

#include<stdio.h>

int main(){
	
	float base, altura;
	
	printf("Digite o valor da base do triangulo: \n");
	scanf("%f", &base);
	
	printf("Digite o valor da altura do triangulo: \n");
	scanf("%f", &altura);
	
	printf("A area do triangulo e igual a %0.2f.", (base*altura)/2);
	
	return 0;
}

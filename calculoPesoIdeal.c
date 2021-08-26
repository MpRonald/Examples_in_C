// Tendo como dados de entrada altura e o sexo de uma pessoa, construa um programa que
// calcule seu peso ideal, utilizando a seguinte formula: peso ideal = (72.7 * altura) - 58

#include<stdio.h>
#include<locale.h>

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, pesoIdeal;
	char sexo;
	
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	flush_in(); 
	
	printf("Digite seu sexo (M/F): ");
	scanf("%c",&sexo);
	
	pesoIdeal = (72.7 * altura) - 58.0;
	
	printf("\n O sexo digitado foi %c e o peso ideal da pessoa é %.2f quilos. \n", sexo, pesoIdeal);
	
	return 0;
}

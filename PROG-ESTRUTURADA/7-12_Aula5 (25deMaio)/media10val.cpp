/*
Fa�a um Programa que leia 10 valores inteiros e
escreva no final a m�dia dos valores lidos
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=1, soma=0, n;
	float media;
	
	while(cont<=10){
		cout<<"Informe o "<<cont<<"� n�mero: ";
		cin>>n;
		soma = soma + n;
		cont++;
	}
	media=soma/(cont-1);
	
	cout<<"A m�dia dos "<<(cont-1)<<" valores digitados foi: "<<media;


	return 0;
}

/*
Fa�a um Programa que escreva na tela os n�meros
�mpares de 0 at� 80, e a m�dia dos n�meros pares.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, cont=0, par, soma, contpar, media;
	
	cout<<"Impares at� 80: \n";
	
		while(cont<=80){
	
			if(cont%2==0 ){
				soma = soma+cont;
				contpar = contpar + 1;
				cont++;}
			
			
				else{
					cout<<cont<<" ";
					cont++;}		
		}
	
	media = soma/contpar;
	cout<<"\nA m�dia dos pares �: "<<media;
	
	return 0;
	
}

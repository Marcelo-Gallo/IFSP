/*
Fa�a um programa que receba 5 valores para um vetor de inteiros
e mostre os valores digitados pelo usuario.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//vamos criar a vari�vel do tipo vetor
	
	int vetor[5], i;
	//vamos atribuir valores utilizando um la�o de repeti��o.
	//defino valor 5 para vetor mas vai de 0 a 4
	
	for(i=0;i<=4;i++){
		cout<<"\nDigite o "<<i+1<<"� valor: ";
		cin>>vetor[i];
	}
	//agora, vamos exibir os valores digitados com um la�o de repeti��o.
	cout<<"\n\nOs dados digitados foram: \n";
	for(i=0;i<=4;i++){
		cout<<vetor[i]<<"\n";
	}
	
	
	return 0;
}

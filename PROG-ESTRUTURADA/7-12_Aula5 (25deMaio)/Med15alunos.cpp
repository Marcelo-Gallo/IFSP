/*
Fa�a um Programa que leia 3 notas escolares de 15
alunos. Para cada um dos alunos calcular e
apresentar a m�dia aritm�tica.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=1, contmed=1;
	float med, soma, nota;
	char nome[30];
	
	while(cont<=15){
		cout<<"\n"<<cont<<"� aluno";
		cout<<"\nDigite o nome do aluno: ";
		cin>>nome;
		
			while(contmed<=3){
				cout<<"Digite a "<<contmed<<"�nota: ";
				cin>>nota;
				soma=soma+nota;
				contmed++;
		}
		
		med=soma/contmed;
		cout<<"A m�dia do aluno "<<nome<<" �: "<<med<<"\n";
		
		contmed=1;
		med=0;
		soma=0;
		nota=0;
		
		cont++;
	}
	
	
return 0;	
}

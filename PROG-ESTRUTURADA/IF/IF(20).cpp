//Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritim�tica e a mensagem constante na tabela a seguir.
//Aos alunos que ficaram para exame, calcule e mostre a nota que dever�o tirar para serem aprovados, considerando que a m�dia exigida
//� 6.0, ou seja, para calcular a nota que o aluno ter� que tirar no exame usa-se a formula: notaExame=12-m�dia.

#include <iostream>
using namespace std;

int main(){
	float notaExame, nota1, nota2, nota3, media;
	
	cout<<"Informe a primeira nota: ";
	cin>>nota1;
	
	cout<<"Informe a segunfa nota: ";
	cin>>nota2;
	
	cout<<"Informe a terceira nota: ";
	cin>>nota3;
	
	media=((nota1+nota2+nota3)/3);
	notaExame=(12-media);
	
	if(media<3){
		cout<<"\nAluno Reprovado!!!";
	}
	
	//o else abaixo serve para o programa n�o ter que ler o cout<<"\nAluno Reprovado!!!"; acima
	//se n�o encaixar no parametro (media<3) ele pula direto para o proximo "if (media>=3 && media<6)"
	//e se n�o encaixar tbm ele vai direto pro ultimo else, por exclus�o
	else if(media>=3 && media<6){
		cout<<"\nAluno de exame! Deve tirar "<<notaExame<<" no exame!";
	}
	
	else{
		cout<<"\nAluno Aprovado!!!";
	}
		
	getchar();
	return 0;
	
	}

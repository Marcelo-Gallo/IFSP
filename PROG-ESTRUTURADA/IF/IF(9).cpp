//Escreva um programa que receba o valor atual do salario de um funcion�rio e calcule um aumento de 15%.
//Mostre o valor inicial e o sal�rio com aumento.
//*Nesse caso eu fiz o aumento vari�vel.

#include <iostream>
using namespace std;

int main(){
	
	float salario, aumento, final;
	
	cout<<"Informe o valor do sal�rio: ";
	cin>>salario;
	
	cout<<"Digite o valor do aumento percentual: ";
	cin>> aumento;
	
	final=salario+(salario*(aumento/100));
	
	cout<<"\n\nO valor do sal�rio digitado foi: "<<salario
		<<"\nO valor do aumento percentual foi: "<<aumento
		<<"\nO valor atualizado do sal�rio ser�: "<<final;
		
		getchar();
		return 0;
	
}

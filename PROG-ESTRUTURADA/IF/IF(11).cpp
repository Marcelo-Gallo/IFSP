/*
Uma revendedora de carros usados paga a seus funcion�rios vemdedores um sal�rio fixo por m�s  mais 5% sobre o valor
das vendas efetuadas.
Escreva um programa que:
-Receba o valor do sal�rio
-Receba o valor total de carros vendidos pelo vendedor
-Calcule e mostre o sal�rio final
*/

#include <iostream>
using namespace std;

int main(){
	
	float salario,vendas,comissao=0.05,final;
	
	cout<<"Informe o sal�rio do funcion�rio:R$";
	cin>>salario;
	
	cout<<"Informe o valor das vendas do funcion�rio:R$";
	cin>>vendas;
	
	final=salario+(vendas*comissao);
	
	cout<<"\n\nO sal�rio do funcionario neste m�s � de:R$"<<final;
	
	getchar();
	return 0;
	
}

#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cod;
	float sal;
	
	//Recebendo o codigo do cargo: 
	cout<<"Informe o codigo do cargo: ";
	cin>>cod;
	
	//recebendo salario do funcionario:
	cout<<"Agora, informe o sal�rio do funcion�rio: ";
	cin>>sal;
	
	if(cod==1){
		cout<<"\n===Escritur�rio===\n";
		cout<<"O cargo de Escritur�rio possui um aumento de 50% no sal�rio.";
		cout<<"\nSeu sal�rio atualizado �: R$"<<sal*1.5;
		cout<<"\nO valor do aumento foi: R$"<<sal*0.5;
	}
	
	else if(cod==2){
		cout<<"\n===Secret�rio===\n";
		cout<<"O cargo de Secret�rio possui um aumento de 35% no sal�rio.";
		cout<<"\nSeu sal�rio atualizado �: R$"<<sal*1.35;
		cout<<"\nO valor do aumento foi: R$"<<sal*0.35;
	}
	
	else if(cod==3){
		cout<<"\n===Caixa===\n";
		cout<<"O cargo de Caixa possui um aumento de 20% no sal�rio.";
		cout<<"\nSeu sal�rio atualizado �: R$"<<sal*1.2;
		cout<<"\nO valor do aumento foi: R$"<<sal*0.2;
	}
	
	else if(cod==4){
		cout<<"\n===Gerente===\n";
		cout<<"O cargo de Gerente possui um aumento de 10% no sal�rio.";
		cout<<"\nSeu sal�rio atualizado �: R$"<<sal*1.1;
		cout<<"\nO valor do aumento foi: R$"<<sal*0.1;
	}
	
	
	return 0;
}

/*
Fa�a um programa que receba um n�mero qualquer.
Mostre em seguida:
-O valor do seu antecessor
-O valor do n�mero digitado
-O valor do seu sucessor
*/

#include <iostream>
using namespace std;

int main(){
	
	float antecessor,numero,sucessor;	
	
	cout<<"=====================================\n";
	cout<<"!!!Bem vindo ao ante&suce-sor 2000!!!";
	cout<<"\n=====================================";
	cout<<"\n\nDigite o n�mero!: ";
	cin>>numero;
	sucessor=numero+1;
	antecessor=numero-1;
	
	cout<<"O antecessor do n�mero digitado �: "<<antecessor;
	
	cout<<"\nO n�mero digitado �: "<<numero;
	
	cout<<"\nO sucessor do n�mero digitado �: "<<sucessor;
	
}

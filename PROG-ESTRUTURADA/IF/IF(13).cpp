//Fa�a um programa que receba as notas de 3 provas.
//Calcule e mostre a m�dia aritim�tica.

#include <iostream>
using namespace std;

int main(){
	
	float n1,n2,n3,media;
	cout<<"======================\n";
	cout<<"Bem vindo ao m�dia j�!";
	cout<<"\n======================";
	
	cout<<"\n\nDigite a primeira nota: ";
	cin>>n1;
	
	cout<<"\nDigite a segunda nota: ";
	cin>>n2;
	
	cout<<"\nDigite a terceira nota: ";
	cin>>n3;
	
	media=(n1+n2+n3)/3;
	
	cout<<"\n\nA m�dia das 3 provas �: "<<media;
	
	getchar();
	return 0;
}

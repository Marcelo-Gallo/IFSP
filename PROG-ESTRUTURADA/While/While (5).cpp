/*
Fa�a um programa que calcule o fatorial de um numero fornecido pelo usu�rio.
Entretanto o n�mero deve estar no intervalo entre 1 e 10.
Dica: Fatorial � calculado: 4! = 1x2x3x4 = 24
6! = 1x2x3x4x5x6 = 720
O meu ta em loop ate eu pedir pra sair.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, contador=1, result=1, resp=1;
	
	while(resp!=0){
		
	int num, contador=1, result=1, resp=1;
				
	cout<<"\nDigite o numero que deseja o fatorial no intervalo de 1 a 10: ";
	cin>>num;
	
		if(num>10 || num<0){
		cout<<"Numero n�o pertence ao intervalo definido!";
		return 0;
		}
			
			while(contador<=num){
			result = result*contador;
			contador++;
			}
			
	cout<<"O valor fatorial de "<<num<<" �: "<<result;
	cout<<"\n\nDeseja fazer outro fatorial? (0 = N�o / 1 = Sim)";
	cout<<"\nResposta: ";
	cin>>resp;
	
	if(resp==0){
	return 0;
	}
	
}
	return 0;
}

/*
Um professor precisa calcular a m�dia aritm�tica de 4 notas.
As notas de cada prova variam de 0 a 10. --> n�o foi considerado!
Fa�a um programa utilizando la�o de repeti��o que receba as 4 notas e mostre a m�dia.
Fa�a com while()
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	float nota=0, media=0, contaNota=0;
	
	while(contador<=4){
		cout<<"Digite a "<<contador<<"� nota: ";
		cin>>nota; //recebe nota
				
		contaNota=contaNota+nota; //acomula nota
		
		contador++; //conta itera��es
		
	}
	
	media=contaNota/(contador-1); //contador valia 5 (come�ou no 1 e rodou +4 vezes)
	//ou podia colocar o contador = 0 e tirar o -1
	
	cout<<"A m�dia das notas �: "<<media;
	return 0;
}

/*
Fa�a um programa que preencha um vetor com 8 posi��es.
Calcule e mostre dois vetores resultantes.
O primeiro vetor resultante deve conter os n�meros positivos.
O segundo vetor resultante deve conter os n�meros negativos.
Cada vetor resultante vai ter, no m�ximo, 8 posi��es (por que?)
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i=0, contaneg=0, contapos=0;
	float vet[8], vetpos[8], vetneg[8];
	
	for(i=0;i<=7;i++){
		cout<<"Informe o valor da "<<i+1<<"� casa: ";
		cin>>vet[i];
		
		if(vet[i]<0){
			vetneg[contaneg]=vet[i];
			contaneg++;
		}
			else if(vet[i]>=0){
				vetpos[contapos]=vet[i];
				contapos++;
			}
	}
	
	/*
	Preciso usar vetneg[i] --> o i pq o meu for ta andando de i em i,
	se colocar o contador(contaneg) da erro pq n�o � meu contador que ta fazendo o loop.
	O contaneg � s� pra dizer quando parar.
	Famoso: meu loop ta em fun��o de i e n�o de contaneg.
	N�o posso colocar i<=contaneg pq ele vai andar uma casa a mais doq deveria(pq eu somei l� no if), melhor colocar s� <.
	Sugest�o minha depois de reler o c�digo: trocar contaneg, contapos por ineg, ipos(menos confuso).
	*/
	
	cout<<"Valores negativos: ";
	for(i=0;i<contaneg;i++){
		cout<<"["<<vetneg[i]<<"] ";
		
	}
		cout<<"\nValores positivos: ";
	for(i=0;i<contapos;i++){
		cout<<"["<<vetpos[i]<<"] ";
	}
	
	return 0;
}

#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float sal, imposto[4], total;
	
	//recebendo salarios: 
	for(i=0;i<4;i++){
		cout<<"\nSal�rio do "<<i+1<<"� funcion�rio: ";
		cin>>sal;
		
		//calculando impostos:
		imposto[i] = sal*(0.05);
		
		//somando impostos:
		total = total+imposto[i];
	}
	
	//loop exibindo o imposto de cada funcion�rio:
	for(i=0;i<4;i++){
		cout<<"\nO imposto para o "<<i+1<<"� funcion�rio �: R$"<<imposto[i];
	}
	//soma dos impostos:
	cout<<"\nO total de imposto pago �: R$"<<total;
	
	return 0;
}

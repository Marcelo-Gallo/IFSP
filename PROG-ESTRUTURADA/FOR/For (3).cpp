#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*fa�a um programa que receba dois numertos reais e mostrea a divisao do primeiro pelo segundo e mostrar o resultado*/
/*se o segundo for zero, mostrar "Divis�o impossivel"*/
/*repetir 5 vezes*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float num1, num2, result;
	
	for(i=1;i<=5;i++){
		cout<<"\nDigite o numerador da opera��o: ";
		cin>>num1;
		cout<<"Digite o divisor da opera��o: ";
		cin>>num2;
		
			if(num2==0){
			   cout<<"Divis�o imposs�vel!\n";
			}
				else{
					result=(num1/num2);
					cout<<"O resultado �: "<<result<<"\n";
				}
	}
	system("PAUSE");
	return 0;
}


/*
Fa�a um programa que apresente os n�meros
divis�veis por 3 e que estejam entre 4 e 12.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	cout<<"Divisiveis por tr�s at� o numero desejado.";
	cout<<"\nInforme um numero entre 4 e 12: ";
	cin>>n;
	
	if(n<4){
		cout<<"Numero invalido, digite um numero igual ou maior que 4!";
		return 0;
	}
	
		else if(n>12){ //se eu anular isso, posso usar qualquer numero.
			cout<<"Digite um n�mero menor que 12 (t� querendo travar o pc �???)";
			return 0;
		}
		
			else while(n>3){
				
				if(n%3==0){
					cout<<n<<"\n";
					n=n-1;
				}
				
					else{
					n=n-1;
					}
			}
	
	
	return 0;
}

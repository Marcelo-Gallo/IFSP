//fa�a um algoritimo que verifique se um numero � maior que 1500

#include <iostream>
using namespace std;

int main(){
	
	float num;
	
	cout<<"Digite o numero a ser verificado: ";
	cin>>num;
	
	if(num>1500){
		cout<<"O numero eh maior que 1500!";
	}
	
	else{
		cout<<"O numero eh menor que 1500 ou � ele mesmo!";
	}
	
	getchar();
	return 0;
	
}

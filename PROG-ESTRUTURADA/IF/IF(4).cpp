#include <iostream>

using namespace std;

int main(){
	//nesse exercicio vamos mostrar os resultados
	//das opera��es basicas de matem�tica utilizando
	//utilizando 6 vari�veis de numeros reais(float)
	float n1=20,n2=4,soma,diferenca,divisao,multiplicacao;
	
	soma=n1+n2;
	diferenca=n1-n2;
	divisao=n1/n2;
	multiplicacao=n1*n2;
	
	cout<<"Soma: "<<soma<<"\nDiferen�a: "<<diferenca<<"\nDivis�o: "<<divisao<<"\nMultiplica��o: "<<multiplicacao;
	// Poderia ter escrito como:
	//  cout<<"Soma: "<<soma
	//  <<"\nDiferen�a: "<<diferenca
	//  <<"\nDivis�o: "<<divisao
	//  <<"\nMultiplica��o: "<<multiplicacao;
	// S� muda quest�es est�ticas do c�digo, mas o funcionamento � o mesmo!
	    
	    //getchar cria uma pausa no sistema esperando o usu�rio digitar alguma coisa
	    getchar();
	    return 0;
	
	
	
}

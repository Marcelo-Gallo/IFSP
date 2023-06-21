/*
	Exercicio01:
	Crie uma matriz 5x5 com valores aleat�rios entre 0 e 150.
	
	Em seguida, pe�a para o usu�rio escolher um n�mero entre 0 e 150.
	
	O programa, ent�o, ir� verificar se o n�mero digitado est� no conjunto de n�meros gerados na matriz.
	Para cada vez que o n�mero for encontrado na matriz, o usu�rio vai ganhar 10 reais.
	
	Implemente para que seja mostrado:
	-Quantas vezes o n�mero escolhido aparece na matriz.
	-Qual o valor em reais $ que o usu�rio vai ganhar.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][5], i, j, escolha, aparicao, premio=10;
	srand(time(NULL));
	char resposta[1];
	
	cout<<"===============Cassino do agiota amigo===============";
	cout<<"Deseja testar sua sorte? S para Sim, N para N�o: ";
	cin>>resposta;
	
	system("CLS");
	
	while (strcmp(resposta,"s")==0 || strcmp(resposta,"S")==0){
	
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			matriz[i][j]=rand() %151; //0 at� 150
		}
	}
	
	cout<<"===============Cassino do agiota amigo===============";
	
	cout<<"\nInforme sua escolha de n�mero: ";
	cin>>escolha;
	cout<<"=====================================================";
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if(escolha == matriz[i][j]){
			aparicao++;
			}
		}
	}
	
	cout<<"\nO numero escolhido apareceu "<<aparicao<<" vezes na matriz gerada.";
	cout<<"\nO valor ganho foi: R$"<<aparicao*premio;
	
	if(aparicao==0){
		cout<<"\n***Parabens! Voc� ganhou uma perna quebrada!***";
	}
	
	cout<<"\n";
	
	
	
	//mostrando a matriz p/ confirmar:
	cout<<"\nMatriz de confer�ncia: ";
	for (i=0;i<5;i++){
		cout<<"\n";
		for (j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t"; //0 at� 150
		}
	}
	
	
	cout<<"\n=====================================================";
	
	cout<<"\nDeseja fazer outra aposta? S para Sim, N para N�o: ";
	cin>>resposta;
	
	system("CLS");
}
	
	return 0;	
}

/*
Fa�a um programa para verificar se uma determinada senha (numerica) digitada esta correta.
O usu�rio ter� apenas 3 tentativas. Se o usu�rio errar a senha, ent�o mostre a frase:
"Senha incorreta. Voc� tem mais X tentativas", onde x � a quantidade restante de tentativas.
Se o usuario acertar a senha, ent�o mostre a mensagem "Acesso pertmitido!" e interromper a execu��o com o codigo "breack".
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int senha, senhadigitada;
	int contador=2;
	
	senha=220205;
	
	while(contador>=0){
		cout<<"\nDigite a senha: ";
		cin>>senhadigitada;
			
			if(senhadigitada!=senha && contador==0){
			cout<<"\nTentativas esgotadas!\n";
			break;
			}
			else
			
			if(senhadigitada!=senha){
			cout<<"\nSenha incorreta. Voc� tem mais "<<contador<<" tentativas";
			}
						
			else{
			cout<<"\nAcesso Permitido!\n";
			break;
			}
		contador--;
	}
	
	return 0;
}

/*
O custo de um carro novo ao consumidor � a soma do custo de f�brica mais a porcentagem do distribuidor
e dos impostos (aplicado ao custo de f�brica).
Supondo que o percentual do distribuidor seja 13% (faz o L! KKKK), e os impostos de 18%, escreva um programa para ler:
-custo de f�brica

Mostrar:
-Custo digitado
-Valor do percentual do distribuidor
-valor do imposto
-Valor total final
*/
 #include <iostream>
 using namespace std;
 
 int main(){
 	
 	float custo, dist, imp, final;
 	
 	cout<<"Imforme o custo de f�brica do carro: R$";
 	cin>>custo;
 	
 	final=custo+(custo*13/100)+(custo*18/100);
 	
 	dist=custo*0.13;
 	imp=custo*0.18;
 	
 	cout<<"\n\nO valor percentual do distribuidor �: R$"<<dist
 		<<"\nO valor percentual dos impostos �: R$"<<imp
 		<<"\nOs valores acima s�o aplicados ao custo de f�brica*"
 		<<"\nO valor final �: R$"<<final;
 	
 	getchar();
 	return 0;
 	
 }

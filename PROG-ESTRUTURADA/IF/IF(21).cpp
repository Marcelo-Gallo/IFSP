/*a nota final de um estudante � calculada a partir de tr�s notas atribuidas, respectivamente, a um trabalho de laborat�rio,
a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas obedece o peso a seguir:

        NOTA                    PESO
trabalho de laborat�rio          2
avalia��o semestral              3
exame final                      5

fa�a um programa que receba as tr�s notas, calcule e mostre a m�dia ponderada e o conceito que segue a tabela:
*/

#include <iostream>
using namespace std;

int main(){
	float traLab, avaSem, exameFinal, mediaPond1, mediaPond2, mediaPond3, mediaPondF;
	
	cout<<"Digite a nota do trabalho de laboratorio: ";
	cin>>traLab;
	
	cout<<"Digite a nota da avalia��o semestral: ";
	cin>>avaSem;
	
	cout<<"Digite a nota do exame final: ";
	cin>>exameFinal;	
	
	mediaPond1=(traLab*0.2);
	mediaPond2=(avaSem*0.3);
	mediaPond3=(exameFinal*0.5);
	mediaPondF=(mediaPond1+mediaPond2+mediaPond3);
	
	if(mediaPondF>=0 && mediaPondF<5){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito E!";
	}
	
	else if(mediaPondF>=5 && mediaPondF<6){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito D!";
	}
	
	else if(mediaPondF>=6 && mediaPondF<7){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito C!";
	}
	
	else if(mediaPondF>=7 && mediaPondF<8){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito B!";
	}
	
	else{
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito A!";
	}
	
	getchar();
	return 0;
}

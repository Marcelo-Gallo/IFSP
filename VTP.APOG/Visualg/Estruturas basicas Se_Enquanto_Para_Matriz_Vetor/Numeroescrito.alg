algoritmo "Numero por extenso"
//Escreva um algoritmo que solicita ao usu�rio para digitar um n�mero inteiro
//positivo, e mostre-o por extenso. Este n�mero dever� variar entre 1 e 5. Se
//o usu�rio digitar um n�mero que n�o pertence a este intervalo, mostre a frase
//"numero invalido". O programa deve ficar executando at� que o usu�rio digite 0
var
num:inteiro
inicio
num <- 1
escreval("Para encerrar o programa de escrever n�meros por extenso, digite '0'")
escreval("Os numeros devem estar num intervalo de 1 a 5")
//tive que colocar 1 como valor de num pq quando se cria variavel num�rica
// ela come�a valendo 0
   enquanto (num <> 0) faca
      escreval ("Digite um numero: ")
      leia(num)
         se (num=1) e (num<>0) entao
            escreval("Voc� digitou o n�mero um!")
         senao
            
            se (num=2) e (num<>0) entao
               escreval("Voc� digitou o n�mero dois!")
            senao
            
               se (num=3) e (num<>0) entao
                  escreval("Voc� digitou o n�mero tr�s!")
               senao

                  se (num=4) e (num<>0) entao
                     escreval("Voc� digitou o n�mero quatro!")
                  senao

                     se (num=5) e (num<>0) entao
                        escreval("Voc� digitou o n�mero cinco!")
                     senao

                        se (num>5) ou (num<0) ou (num<>0) entao
                           escreval("N�mero Inv�lido!!!")

                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse

   fimenquanto
         
fimalgoritmo

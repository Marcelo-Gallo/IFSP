algoritmo "semnome"
//fa�a um algoritmo que solicite N n�meros inteiros at� que o numero 0(zero)
//seja digitado.
//Ao final o algoritmo deve informar o maio e o menor n�mero digitado.
//Obs: o numero 0(zero) n�o pode ser contado
var
numero, maior, menor:inteiro
inicio
menor <- 99999999
//flag � variavel auxiliar
//copiar jeito do professor e estudar
//o numero <-1 � pra come�ar o enquanto, se n�o num entra

escreva("informe o primeiro numero: ")
leia(numero)

   enquanto numero <>0 faca
      escreva("Informe um n�mero: ")
      leia(numero)
         se (numero <>0) entao
         se (numero >= maior) entao
            maior<-numero
         senao
            menor<-numero
         fimse
         fimse
   fimenquanto
   
     escreval("O maior n�mero �: ", maior)
     escreval("O menor n�mero �: ", menor)

fimalgoritmo

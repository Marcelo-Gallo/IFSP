algoritmo "Maior e menor numero digitados"

//Fa�a um algoritimo que solicite N n�meros inteiros. Ao final o algoritimo
//deve informar o maior e o menor n�mero digitado.

var

entrada, contador, n, maior, menor:inteiro

inicio
   entrada <- 0
   maior <-0
   
   escreva("Informe a quantidade de n�meros: ")
   leia(n)
   
   para contador <- 1 ate n faca
   escreval("Informe um n�mero: ")
   leia(entrada)
    se (entrada >= maior) ou (entrada >= menor) e (entrada >= 0)entao
     maior <- entrada
    fimse
     se (entrada <= maior) ou (entrada <= menor) e (entrada <= 0) entao
      menor <- entrada
     fimse
     
     
    fimpara
     escreval("O maior n�mero �: ", maior)
     escreval("O menor n�mero �: ", menor)
   
   



fimalgoritmo

algoritmo "tabuada"

var
   contador, resp, numero:inteiro
inicio
   escreva("Informe o n�mero: ")
   leia(numero)
   
   para contador <- 1 ate 10 faca
    //se(numero <> 2)entao --> pra n�o fazer nada quando eu digitar 2
     //resp <- numero * contador (isso n�o tem haver com o se)
     escreval(numero, " X ", contador, " = ",numero * contador)//ou resp no lugar de numero * contador
     //fimse
   fimpara

fimalgoritmo

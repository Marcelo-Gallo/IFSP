algoritmo "Exercicio 1"
//fa�a um algoritmo que efetue o calculo da tabuada de um numero
//O calculo dever� ser feito por um procedimento que receber� o
//numero e mostrar� o resultado na tela
var
  numero:real
inicio
  procedimento calculo_tabuada(a:real)
   var
   contador:inteiro
   resultado:real
   inicio

   para contador <- 0 ate 10 faca
   resultado <- a * contador
   escreval(a, " x ", contador, " = ",resultado)
   fimpara
   
  fimprocedimento
  escreva("Informe o numero que deseja calcular a tabuada: ")
  leia(numero)
  calculo_tabuada(numero)
fimalgoritmo

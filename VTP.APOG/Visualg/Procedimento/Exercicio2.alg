algoritmo "Exercicio2"

var
  n1,n2,n3,n4:real
inicio
  procedimento cal_media(a,b,c,d:real)
   var
    media:real
   inicio
    media <- (a+b+c+d)/4
    escreva("A media �: ",media)
   fimprocedimento
   
   escreva("Informe o 1� n�mero: ")
   leia(n1)
   escreva("Informe o 2� n�mero: ")
   leia(n2)
   escreva("Informe o 3� n�mero: ")
   leia(n3)
   escreva("Informe o 4� n�mero: ")
   leia(n4)
   
   cal_media(n1,n2,n3,n4)
fimalgoritmo

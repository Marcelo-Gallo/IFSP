algoritmo "Opera��es"

var

n1,n2,resultado:real
op:real

inicio

escreval("Escolha a opera��o: ")
escreval("Adi��o(1)")
escreval("Subtra��o(2)")
escreval("Multiplica��o(3)")
escreval("Divis�o(4)")
leia(op)

 se(op=1)entao
  escreva("Digite o primeiro valor: ")
  leia(n1)
  escreva("Digite o segundo valor: ")
  leia(n2)
  resultado<-(n1+n2)
  escreva("O resultado �: ",resultado)
 senao
 
  se(op=2)entao
   escreva("Digite o primeiro valor: ")
   leia(n1)
   escreva("Digite o segundo valor: ")
   leia(n2)
   resultado <- (n1-n2)
   escreva("O resultado �: ",resultado)
  senao
  
     se(op=3)entao
      escreva("Digite o primeiro valor: ")
      leia(n1)
      escreva("Digite o segundo valor: ")
      leia(n2)
      resultado<-(n1*n2)
      escreva("O resultado �: ",resultado)
     senao
     
       se(op=4)entao
        escreva("Digite o primeiro valor: ")
        leia(n1)
         se(n1=0)entao
          Escreva("O resultado � 0")
         senao
          escreva("Digite o segundo valor: ")
          leia(n2)
           se(n2=0)entao
            escreva("O resultado � 0")
           senao
           
            resultado<-(n1/n2)
            escreva("O resultado �: ",resultado)
     
           fimse
         fimse
       fimse
     fimse
   fimse
 fimse
     
fimalgoritmo




algoritmo "Aumento"
//Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio
//e sey sl�rio atual e mostre o cargo, o valor do aumento e seu novo sal�rio.
//Os cargos est�o na tabela a seguir.
//C�digo     Cargo          Aumento
//   1       Escritu�rio      50%
//   2       Secret�rio       35%
//   3       Caixa            20%
//   4       Gerente          10%
//   5       Diretor          0%

var

sal, Au, SalA:real
cod:inteiro

inicio

   escreva("Digite o c�digo do cargo de 1 a 5: ")
   leia(cod)
   se(cod=1)entao
      escreval("Cargo de Escritu�rio")
      escreva("Sal�rio: ")
      leia(sal)
      escreval("O aumento � 50%")
      SalA <- (sal+(sal*50/100))
      escreva("O sal�rio final �: ",SalA)
   senao
      se(cod=2)entao
         escreval("Cargo de Secret�rio")
         escreva("Sal�rio: ")
         leia(sal)
         escreval("O aumento � 35%")
         SalA <- (sal+(sal*35/100))
         escreva("O sal�rio final �: ",SalA)
      senao
         se(cod=3)entao
            escreval("Cargo de Caixa")
            escreva("Sal�rio: ")
            leia(sal)
            escreval("O aumento � 20%")
            SalA <- (sal+(sal*20/100))
            escreva("O sal�rio final �: ",SalA)
         senao
            se(cod=4)entao
               escreval("Cargo de Gerente")
               escreva("Sal�rio: ")
               leia(sal)
               escreval("O aumento � 10%")
               SalA <- (sal+(sal*10/100))
               escreva("O sal�rio final �: ",SalA)
            senao
               se(cod=5)entao
                  escreval("Cargo de Diretor")
                  escreva("Sal�rio: ")
                  leia(sal)
                  escreval("O aumento � 0%")
                  SalA <- (sal)
                  escreva("O sal�rio final �: ",SalA)
               senao
                  se(cod>5) ou (cod=0)entao
                     escreva("C�digo Inv�lido!!!")
                  senao
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

      SalA <- (sal*Au/100)

fimalgoritmo

algoritmo "Solo"

//Voc� esta fazendo um trabalho de classifica��o de solo.
//Apos coletar uma amostra e verificar a quantidade de pontos de �gua presente
//nela, classificou a amostra em:
//Rochosa:Se menos ou igual a 10 pontos de �gua.
//Firme:Se mais de 10 e menos ou igual a 40 pontos de �gua.
//Pantanosa:Se mais de 40 e menos ou igual a 80 pontos de �gua.
//Quantidade inv�lida: se mais que 80 pontos.

var
   pontos:real
inicio

  escreva("Insira a quantidade de pontos d'�gua da amostra: ")
  leia(pontos)

  se(pontos <= 10)entao
     escreval("O solo � rochoso.")
  senao
     se(pontos > 10) e (pontos <= 40)entao
       escreval("O solo � firme.")
     senao
        se(pontos <= 80)entao
           escreval("O solo � pantanoso.")
        senao
           escreval("Quantidade de pontos inv�lida!")
        fimse
     fimse
  fimse
fimalgoritmo

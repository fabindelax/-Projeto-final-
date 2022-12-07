#include <stdio.h>
#include <math.h> //biblioteca matem�tica
#include <strings.h> //biblioteca strings

int main (){

    /*(Capitulo 4)"Comentarios compensam um codigo ruim", foi usado porque
    o codigo esta confuso e desorganizado, mas contem diversos comentarios informativos. ;-;*/
    int quant_sessoes, sessao, assistiram, contador;
    int ingressos, ingressos2, cont_int1=0, cont_int2=0, cont_mei1=0, cont_mei2=0;// Vari�veis dos ingressos, meia, inteira.
    float total,sessao1,sessao2;
    int criancaf=0, adolescentef=0, adultof=0, idosof=0 , criancam=0, adolescentem=0, adultom=0, idosom=0; // Vari�veis de sexo e tabela da idade.
    int cont_fem=0, cont_masc=0;
    int idade;
    char sexo, filme[100];
    int menu_pipoca; // vari�veis das pipocas
    float pipoca_din=0, pip_sal=0,pip_lei=0, pip_cro=0, pip_nutella=0, pip_ds=0;
    int quant_pipoca=0, lanche;

    printf("Nome: Fabio Augusto Dias Nascimento \nMatricula: UC22101697\nCurso:ADS.");
    /*agora vai comecar o codigo com a pergunta do nome do filme e as sessoes.*/
    printf("\n\nBem Vindo ao Cineflix, Qual vai ser o filme de hoje?\n");
    printf("\nNome do filme:"); 
    fgets(filme, 100,stdin);
    fflush (stdin);

    printf("Digite a quantidades de sessoes:");
    scanf("%d", &quant_sessoes);   
    /*foi usado um while para limitar o numero de sess�es que no caso foi pedido 2,
    se for digitado qualquer outro numero vai ser repetido a mesma pergunta.*/
while (quant_sessoes !=2){    
    printf("Quantidade de sessoes invalido, e aceito apenas duas sessoes.");
    printf("\nQuantidades de sessoes:");
    scanf("%d", &quant_sessoes);}
    fflush (stdin);
    /* Nesse caso vai ser a pergunta de quantas pessoas assistiram ao filme, caso o cliente digite
    um valor menor que 10 vai ser repetido a pergunta.*/
    printf("Quantas pessoas assistiram ao filme?");  
    scanf("%d", &assistiram);
while(assistiram <10){   
    printf("Numero Invalido!Digite um numero maior que dez.");
    printf("\nQuantas pessoas assistiram ao filme?");  
    scanf("%d", &assistiram);}
    fflush (stdin);
    /*Utilizei o FOR para que a pergunta do SEXO F ou M repita de acordo com
    quantidade de pessoas que assistiram o filme */
for(contador = 0; contador < assistiram; contador++){  

    printf("\nDigite o sexo da %d pessoa:", contador +1); 
    scanf("%c", &sexo);
    fflush (stdin);
    /* foi usado WHILE para repetir a pergunta caso o cliente digite uma 
    letra diferente de F ou M */
while(sexo != 'F' && sexo != 'M' ){

    printf("invalido!Digite F para Feminino e M para Masculino.");
    printf("\nDigite o sexo da %d pessoa:", contador +1);
    scanf("%c", &sexo);
    fflush (stdin);}
    /*o foi usado IF para caso o cliente digite o sexo feminino va imediatamente para
    a pr�xima pergunta que sera a idade. */
if(sexo == 'F'){
cont_fem++;

    printf("Digite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);
    /*foi utilizado o WHILE para repetir a pergunta de idade caso o usu�rio
    digite um valor fora do requisitado, e o IF para definir a idade.*/ 
while(idade <=2 || idade >=101){
    printf("invalido!Digite um numero entre 3 e 100.");
    printf("\nDigite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);}

 if (idade >=3 && idade <=13){
    criancaf++;}
     else if (idade >=14 && idade <=17){
      adolescentef++;}
         else if(idade >=18 && idade <=64){
          adultof++;}
             else  if (idade >=65 && idade <=100){
              idosof++;}}
    /*aqui o ELSE IF para caso o usuario digite o sexo masculino va direto para
    a pr�xima pergunta que sera a idade do cliente. */
 else if (sexo == 'M'){
 cont_masc++;
 
    printf("Digite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);
    /*aqui o WHILE para repetir a pergunta de idade caso o usuario
    digite um valor que n tenha nada a ver, e o IF para definir de acordo com a idade do cliente.*/ 
while(idade <=2 || idade >=101){
    printf("invalido!Digite um numero entre 3 e 100.");
    printf("\nDigite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);}

   if (idade >=3 && idade <=13){
    criancam++;}
     else if (idade >=14 && idade <=17){
     adolescentem++;}
         else if(idade >=18 && idade <=64){
          adultom++;}
             else  if (idade >=65 && idade <=100){
              idosom++;}
 }
    /* aqui diz se a pessoa assistiu a sessao 1 ou 2,
      caso ela coloque um numero errado adicionei o WHILE 
      para refazer a pergunta, para que o cliente responda
	  da forma correta.*/
    printf("Qual sessao a %d pessoa assistiu:", contador +1);
    scanf("%d", &sessao); 
while ( sessao !=1 && sessao !=2){    
    printf("Invalido! Digite 1 ou 2");
    printf("\nQual sessao a %d pessoa assistiu:", contador +1);
    scanf("%d", &sessao);}
    fflush (stdin);

    /*o swicth foi usado para definir o tipo de ingresso do 
    cliente, se for meia ou inteira. O WHILE foi usado 
	para repetir a pergunta caso ela tenha digitado um valor errado.*/
switch (sessao){
    
case 1: 
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos);
    fflush (stdin);
while( ingressos != 1 && ingressos != 2){
    printf("Invalido!Digite 1 ou 2:");
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos);
    fflush (stdin);}


switch (ingressos){
case 1: cont_int1++;break; // aqui sera feito a baixa dos ingressos inteiros

case 2: cont_mei1++;break;} // aqui sera feito a baixa dos ingressos meia
break; // parada do case

case 2:
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1); 
    scanf("%d", &ingressos2); 
    fflush (stdin);
while( ingressos2 != 1 && ingressos2 != 2){
    printf("Invalido!Digite 1 ou 2:");
    printf("\nSe a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos2); 
    fflush (stdin);}

switch (ingressos2){
case 1: cont_int2++;break;
case 2: cont_mei2++;break;}
}
 /*aqui vai ser uma pergunta para o cliente se ele seguiu os passos corretamente,
 com a utilização do while*/
printf("A %d pessoa comprou algum lanche ou bebida? Digite 1 para sim e 2 para nao.", contador+1);// fun��o teste/nova
scanf("%d", &lanche);
while ( lanche !=1 && lanche !=2){
printf("Invalido! Digite 1 ou 2");
printf("A %d pessoa comprou algum lanche? Digite 1 para sim e 2 para nao.", contador+1);
scanf("%d", &lanche);
fflush (stdin);}

if (lanche ==1){
    quant_pipoca++;
    /*a parte do cardapio da pipoca ficou toda aqui, com a utilizacao do case*/
    printf (" \nCardapio \n\n");
    printf ("1 - Pipoca de Sal - 18,00 R$ \n");
    printf ("2 - Pipoca de leiteninho  - 20,00 R$ \n");
    printf ("3 - Pipoca de Crocante - 22,00 R$ \n");
    printf ("4 - Pipoca de Nutella - 24,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite qual opcao que deseja: \n");
    scanf ("%d", &menu_pipoca);
    fflush (stdin);

    switch (menu_pipoca){
    case 1:
          printf ("\nAdicionou Pipoca de Sal a sua bandeja!\n");break;
    case 2:
          printf ("\nAdicionou Pipoca de Leiteninho a sua bandeja!\n");break;
    case 3:
          printf ("\nAdicionou Pipoca de Crocante a sua bandeja!\n");break;
    case 4:
          printf ("\nAdicionou Pipoca de Nutella a sua bandeja!\n");break;
    case 5:
          printf ("\nAdicionou Pipoca Mista Salgada e Doce a sua bandeja!\n");break;}

while (menu_pipoca !=1 && menu_pipoca !=2 && menu_pipoca !=3 && menu_pipoca !=4 && menu_pipoca !=5){
    printf (" \nCardapio \n\n");
    printf ("1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Leiteninho  - 20,00 R$ \n");
    printf ("3 - Pipoca de Crocante - 22,00 R$ \n");
    printf ("4 - Pipoca de Nutella - 24,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite qual a opcao deseja: \n");
    scanf ("%d", &menu_pipoca);
    fflush (stdin);

    switch (menu_pipoca){
    case 1:
          printf ("\nAdicionou Pipoca Salgada a sua bandeja!\n");break;
    case 2:
          printf ("\nAdicionou Pipoca de leiteninho a sua bandeja!\n");break;
    case 3:
          printf ("\nAdicionou Pipoca de Crocante a sua bandeja!\n");break;
    case 4:
          printf ("\nAdicionou Pipoca de Nutella a sua bandeja!\n");break;
    case 5:
          printf ("\nAdicionou Pipoca Mista Salgada e Doce a sua bandeja!\n");break;}}


switch (menu_pipoca){

case 1: pip_sal++;break;
case 2: pip_lei++;break;
case 3: pip_cro++;break;
case 4: pip_nutella++;break;
case 5: pip_ds++;break;}    
}
}

    /*aqui foi feito com base no que foi pedido, contando 50 na inteira e 25 na meia.*/
sessao1= (cont_int1*50)+(cont_mei1*25);
sessao2= (cont_int2*50)+(cont_mei2*25);
total = sessao1+ sessao2;

 pipoca_din = (pip_sal*18)+ (pip_lei*20)+ (pip_cro*22)+ (pip_nutella*24)+(pip_ds*22); // soma dos valores arrecadados da pipoca.
    /*aqui o resultado foi apresentado ao usuario junto com as informacoes de IDADE, SEXO e 
    VALOR, que foram obtidos.*/
    
    printf("\n Resultado:\nFilme: %s", filme);
    printf ("\nMulheres: %d pessoas.\nHomens: %d pessoas.", cont_fem, cont_masc);
    printf ("\nTabela por idade: \nCriancas %d\nAdolescente %d\nAdulto %d \nIdoso %d", criancaf+ criancam, adolescentef+adolescentem,adultof+adultom, idosof+idosom);
    printf("\nMulheres maior de idade: %d", adultof+idosof);
    printf("\nHomens maior de idade: %d", adultom+idosom);
    printf("\nValor arrecadado na primeira sessao: %.2f", sessao1);
    printf("\nValor arrecadado na segunda sessao: %.2f", sessao2);
    printf("\nValor arrecadado em ambas sessao: %.2f", total);
    /*Utilizei o IF e o ELSE IF para definir se obteve mais pagamentos de meias 
    ou inteiras.*/
if (cont_int1 + cont_int2 >cont_mei1 + cont_mei2){
    printf("\nHouve mais pagamento de inteiras");}
    else if (cont_int1 + cont_int2 < cont_mei1 + cont_mei2){
        printf("\nHouve mais pagamento de meias");}
         else if(cont_int1 + cont_int2 == cont_mei1 + cont_mei2){
            printf("\nHouve a mesma quantidade de inteiras e meias pagas");
    }
    /*(Capitulo 5) Formatacao. "Declaracao das variaveis", com a tentativa de declarar
    as variaveis o mais proximo possivel de onde serao usadas, como foi mostrado no codigo*/
    printf("\nQuantidade de pessoas que compraram pipoca: %d", quant_pipoca);
    printf("\nDinheiro pipoca:%.2f", pipoca_din); 
}

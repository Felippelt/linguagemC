#include <stdio.h>
#define ex1

#ifdef ex1
main()
{
    int cont, numL, div, soma_div = 0;

    // Insercao de um numero minimo limite.
    printf("\n Digite um limite inteiro minimo: ");
    scanf("%d", &numL);

    // Laço que permite a exibição de todos os números perfeitos menores que o limite dado pelo usuário.
    for(cont = numL; ; cont--)
    {
        div = 1;
        soma_div = 0;

        // Laço que garante todos os divisores sejam testados com o numero da sequencia perfeita.
        for(div; ; div++)
        {
            if(cont % div == 0 && cont < numL)
            {
                soma_div += div;
            }

            if(numL == div)
            {
                break;
            }
        }

        if(cont * 2 == soma_div)     // Condicao para que o dobro do numero seja = a soma dos seus divisores --> numero perfeito.
        {
            printf("\n O numero %d e' tido como perfeito.", cont);
        }

        // Sai do laço caso o contador = 1.
        if(cont == 1)
        {
            break;
        }
    }
    printf("\n");
}
#endif // ex1

#ifdef ex2
main()
{
    int cont, proximo, primeiro, segundo, nfibo, opcao, cont_i;

    for(cont_i = 0; ;cont_i++)
    {
        // Retorna os valores ao modo inicial, caso o programa não encerre após o primeiro ciclo.
        cont = 0, primeiro = 0, segundo = 1, proximo = 0;

        // O usuario aqui digita quantos termos quer para a seq. Fibonacci.
        do
        {
            printf("\n Entre com o numero de termos da sequencia Fibonacci: ");
            scanf("%d", &nfibo);
        }while (nfibo <= 0);

        // Título do programa de calculo da sequencia dos termos Fibonacci.
        printf("\n Os primeiros %d termos da sequencia Fibonacci sao:\n\n", nfibo);

        // Laço de repeticao
        do
        {
            // Incremeta 1 no contador a cada ciclo do loop.
            cont++;

            // Garante que o segundo termo da sequencia seja 1, caso cont = 1. (Ex.: 1, 1,...)
            if (cont <= 1)
            {
                proximo = cont;
            }
            else
            {
                proximo = primeiro + segundo;           // resultado inicial: 1,1,2, -> pois, soma-se o primeiro = 1 e segundo = 1...
                primeiro = segundo;                     // resultado inicial: 1,1 -> recebe o segundo = 1.
                segundo = proximo;                      // resultado inicial: 1,2 -> recebe o proximo e assim por diante...

            }
            printf(" %d, ", proximo);
        }while (cont != nfibo); // A condição de saída é quando o contador for igual ao numero da seq. inserida pelo usuario.

        // Laço que garante que a opcao digitada seja '0' ou '1'.
        do
        {
            printf("\n\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        // Continua o programa caso a opção escolhida seja 1.
        if(opcao == 0)
        {
            printf("\n Continuando...");
        }else

            // Sai do laço de repetição e termina a execução do programa.
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif

/*1 - Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus divisores.
Escreva um programa que liste todos os númerosperfeitos menores que um inteiro n recebido via teclado.
Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é perfeito.

2 - A sequência de Fibbonaci é a sequência (1, 1, 2, 3, 5, 8, 13, ...).
Escreva um programa que determine o n-ésimo termo desta sequência, n dado.
*/

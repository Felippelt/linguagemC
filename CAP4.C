#include <stdio.h>
#define ex1

#ifdef ex1
main()
{
    static int A[10];
    int cont, letra, opcao;
    int cont_a, cont_i, aux;

    // Laco para loop do programa.
    for(cont = 0; ; cont++)
    {
        // Reseta os valores para default.
        aux = 0;
        cont_a = 1;
        A[1] = 0;

        // Laco para armazenar os numeros no vetor.
        for(cont = 1; cont <= 10; cont++)
        {
            printf("\n Digite o %do numero: ",cont_a);
            scanf("%d",  &A[cont]);
            cont_a++;
        }

        // Laco para organizar esses numeros em ordem crescente.
        for(cont = 1; cont <= 10; cont++)
        {
            for(cont_i = cont; cont_i <= 10; cont_i++)
            {
                if(A[cont] > A[cont_i])
                {
                    aux = A[cont];
                    A[cont] = A[cont_i];
                    A[cont_i] = aux;
                }
            }
        }

        // Exibe a sequencia em ordem crescente dos numeros digitados pelo usuario.
        printf("\n A sequencia crescente dos numeros digitados e': \n\n");
        cont = 1;
        do
        {
            printf(" %d,", A[cont]);
            cont++;
        }while(cont <= 10);

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex1

#ifdef ex2
main()
{
    int cont, opcao;
    static int A[10];

    for(cont = 0; ; cont++)
    {
        for(cont = 0; cont < 10; cont++)
        {
            printf("\n Digite o %do valor: ", cont+1);
            scanf("%d", &A[cont]);
        }

        // Mostra a sequencia invertida da digitada inicialmente.
        printf("\n A sequencia inversa e': ");
        for(cont = 9; cont >= 0; cont--)
        {
            printf("%d, ", A[cont]);
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex2

#ifdef ex3
main()
{
    static int A[10] = {1,2,3,4,5,6,7,8,9,10};
    static int P[5];
    static int I[5];
    int cont, cont_p = 0, cont_i = 0, opcao;

    for(cont = 0; ; cont++)
    {
        cont_p = 0, cont_i = 0, opcao;

        for(cont = 0; cont < 10; cont++)
        {
            // Verifica se os valores digitados são pares ou impares.
            if(A[cont] % 2 == 0)
            {
                P[cont_p] = A[cont];
                cont_p++;
            }else
                {
                    I[cont_i] = A[cont];
                    cont_i++;
                }
        }

        // Guarda no vetor P[5] os valores pares.
        printf("\n A sequencia de numeros pares e': ");
        for(cont = 0; cont < 5; cont++)
        {
            printf("%d, ", P[cont]);
        }

        // Guarda no vetor I[5] os valores impares.
        printf("\n A sequencia de numeros impares e': ");
        for(cont = 0; cont < 5; cont++)
        {
            printf("%d, ", I[cont]);
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex3

#ifdef ex4
main()
{
    static int i[3];
    static long l[3];
    static unsigned int ui[3];
    static float f[3];
    static double d[3];
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        // O usuario entra com os valores dos vetores.
        printf("\n Digite 3 valores inteiros: ");
        scanf("%d%d%d", &i[0],&i[1],&i[2]);

        printf("\n Digite 3 valores long: ");
        scanf("%ld%ld%ld", &l[0],&l[1],&l[2]);

        printf("\n Digite 3 valores unsigned: ");
        scanf("%u%u%u", &ui[0],&ui[1],&ui[2]);

        printf("\n Digite 3 valores ponto flutuante: ");
        scanf("%f%f%f", &f[0],&f[1],&f[2]);

        printf("\n Digite 3 valores double: ");
        scanf("%lf%lf%lf", &d[0],&d[1],&d[2]);

        printf("\n\n        10        20        30        40        50");
        printf("\n12345678901234567890123456789012345678901234567890\n");

        // Gera as linhas da regua com as respectivas variaveis alinhadas.
        for(cont = 0; cont < 3; cont++)
        {
            printf("  %-6d              %-11d         %-5u\n", i[cont], l[cont], ui[cont]);
            printf("            %-8g            %-9g\n", f[cont], d[cont]);
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }

}
#endif // ex4

#ifdef ex5
main()
{
    int cont, opcao, x, palindromo = 0;
    static int A[10];

    for(cont = 0; ; cont++)
    {
        palindromo = 0;
        cont = 0;

        // O usuario digita os valores da sequencia.
        do
        {
            printf("\n Digite o %do valor: ", cont+1);
            scanf("%d", &A[cont]);
            cont++;
        }while(cont < 10);

        cont = 0;
        x = 9;

        // Compara as duas metades da sequencia.
        do
        {
            if(A[cont] == A[x-cont])
                {
                    palindromo++;
                }
            cont++;
        }while(cont < 5);

        // Verifica se as duas metades são iguais ou nao.
        if(palindromo != 5)
        {
             printf("\n O vetor correspondente nao e' palindromo.");
        }else
            {
                printf("\n O vetor correspondente e' palindromo.");
            }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex5

#ifdef ex6
main()
{
    int p, ln, cl, cont, opcao;
    int A[2][3][3] = {          // pagina 0
                     {{0,0,0},  // ln.: 0
                      {0,0,0},  // ln.: 1
                      {0,0,0}}, // ln.: 2
                                // pagina 1
                     {{0,0,0},  // ln.: 0
                      {0,0,0},  // ln.: 1
                      {0,0,0}}  // ln.: 2
                     };

    // Loop infinito ate o usuario encerrar o programa.
    for(cont = 0; ; cont++)
    {
        // Laco para gerar a qtd. de paginas.
        for(p = 0; p < 2; p++)
        {
            // Laco para gerar a qtd. de linhas.
            for(ln = 0; ln < 3; ln++)
            {
                // Laco para gerar a qtd. de colunas.
                for(cl = 0; cl < 3; cl++)
                {
                    printf("\n Digite o valor do vetor p[%d] ln[%d] cl[%d]: ", p, ln, cl);
                    scanf("%d", &A[p][ln][cl]);
                }
            }
        }

        printf("\n\n Matriz 3x2x2: \n\n");
        // Laco para gerar a qtd. de paginas.
        for(p = 0; p < 2; p++)
        {
            // Laco para gerar a qtd. de linhas.
            for(ln = 0; ln < 3; ln++)
            {
                // Laco para gerar a qtd. de colunas.
                for(cl = 0; cl < 3; cl++)
                {
                    if(p == 0)
                    {
                        printf(" [%d] ", A[p][ln][cl]);
                    }else
                        {
                            printf(" [%d] ", A[p][ln][cl]);
                        }
                }
                printf("\n");
            }
            printf("\n");
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }

}
#endif // ex6

#ifdef ex7
main()
{
    static int A[10];
    static int P[5];
    static int I[5];
    int cont, cont_p = 0, cont_i = 0, opcao;

    for(cont = 0; ; cont++)
    {
        cont_p = 0, cont_i = 0, opcao;

        // Armazena os valores digitados pelo usuario no vetor principal.
        printf("\n Digite 5 valores pares e 5 impares: \n");
        for(cont = 0; cont < 10; cont++)
        {
            printf("\n Digite o %do valor: ", cont+1);
            scanf("%d", &A[cont]);

            if(A[cont] % 2 == 0)
            {
                P[cont_p] = A[cont];
                cont_p++;
            }else
                {
                    I[cont_i] = A[cont];
                    cont_i++;
                }
        }

        // Guarda no vetor P[5] os valores pares.
        printf("\n A sequencia de numeros pares e': ");
        for(cont = 0; cont < 5; cont++)
        {
            printf("%d, ", P[cont]);
        }

        // Guarda no vetor I[5] os valores impares.
        printf("\n A sequencia de numeros impares e': ");
        for(cont = 0; cont < 5; cont++)
        {
            printf("%d, ", I[cont]);
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex7

#ifdef ex8
main()
{
    static int K[2][3], L[2][3], M[2][3];
    int ln, cl, i, opcao;

    for(int cont = 0; ; cont++)
    {
        // Gera as matrizes K e L.
        for(i = 0; i < 2; i++)
        {
            // Exibe a mensagem referente ao vetor a ser mostrado (K ou L).
            if(i == 0)
            {
                printf("\n Digite os valores para o vetor 'K'.\n\n");
            }else
                {
                    printf("\n Digite os valores para o vetor 'L'.\n\n");
                }
            // Laco para gerar a qtd. de linhas.
            for(ln = 0; ln < 2; ln++)
            {
                // Laco para gerar a qtd. de colunas.
                for(cl = 0; cl < 3; cl++)
                {
                    printf(" Digite o valor do vetor ln[%d] cl[%d]: ", ln, cl);

                    if(i == 0)
                    {
                        scanf("%d", &K[ln][cl]);
                    }else
                        {
                            scanf("%d", &L[ln][cl]);
                        }
                }
            }
        }
        printf("\n Resultado de K * L: \n\n");
        // Laco para gerar a qtd. de linhas.
        for(ln = 0; ln < 2; ln++)
        {
            // Laco para gerar a qtd. de colunas.
            for(cl = 0; cl < 3; cl++)
            {
                M[ln][cl] = K[ln][cl] * L[ln][cl];
                printf("O vetor M [%d][%d] e': %d\n", ln, cl, M[ln][cl]);
            }
        }

        // Define a continuacao ou encerramento do programa pelo usuario.
        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...\n");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex8

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.

2 - Escreva um programa que receba via teclado 10 numeros inteiros, armazene em
    um vetor e exiba-os em ordem inversa daquela em que foram armazenados.

3 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.

4 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double

5 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)

6 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.

7 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.

8 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.

*/


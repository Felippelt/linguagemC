#include <stdio.h>
#define ex1

#ifdef ex1

int Pesquisa(int a);
char A[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};

main()
{
    int pesq, opcao, cont;
    char letra;

    for(cont = 0; ; cont++)
    {
        // Usuario entra com a letra desejada.
        printf("\n Digite uma letra: ");
        scanf("%c", &letra);

        // Guarda-se uma copia do valor 'a'.
        pesq = Pesquisa(letra);

        // Verifica e exibe uma mensagem correspondente ao conteudo do vetor.
        if(pesq == 1)
        {
            printf("\n A letra digitada esta contida no vetor.");
        }else
            {
                printf("\n A letra digitada nao esta contida no vetor.");
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
        getchar();
    }
}

int Pesquisa(int a)
{
    int x;
    x = 0;
    // Percorre o vetor comparando a letra digitada ao conteudo do vetor.
    for(int cont = 0; cont < 13; cont++)
    {
        if(a == A[cont])
        {
            x = 1;
            break;
        }
    }
    return x;
}
#endif // ex1

#ifdef ex2

int Exponencial(int x, int z);

main()
{
    int X, Z, res, opcao;

    for(int cont = 0; ; cont++)
    {
        res = 0;

        // O usuario insere o numero da base e a exponencial.
        printf("\n Digite um numero de base: ");
        scanf("%d", &X);

        printf("\n Digite um expoente: ");
        scanf("%d", &Z);

        res = Exponencial(X, Z);

        printf("\n O resultado de %d exponencial %d e': %d", X, Z, res);

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

// Funcao que calcula o exponencial.
int Exponencial(int x, int z)
{
    int expo, ultimo;
    expo = 1;

    for(int cont = z; z >= 0; z--)
    {
        expo *= x;
    }

    return expo/2;
}
#endif // ex2

#ifdef ex3

int Soma(int x, int y);
int Subtracao(int x, int y);
int Multiplicacao(int x, int y);
int Divisao(int x, int y);

main()
{
    int n1, n2, opcao;

    for(int cont = 0; ; cont++)
    {
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("\n Digite o segundo numero: ");
        scanf("%d", &n2);

        printf("\n Resultado da soma: %d", Soma(n1, n2));
        printf("\n Resultado da subtracao: %d", Subtracao(n1, n2));
        printf("\n Resultado da multiplicacao: %d", Multiplicacao(n1, n2));

        // Laco responsavel por proteger o programa na divisao por 0.
        if(n2 == 0)
        {
            printf("\n Impossivel dividir por zero.");
        }else
            {
                printf("\n Resultado da divisao: %d", Divisao(n1, n2));
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

int Soma(int x, int y)
{
    return (x+y);
}

int Subtracao(int x, int y)
{
    return(x-y);
}

int Multiplicacao(int x, int y)
{
    return(x*y);
}

int Divisao(int x, int y)
{
    return(x/y);
}
#endif // ex3

#ifdef ex4
int Soma();
int Subtracao();
int Multiplicacao();
int Divisao();

main()
{
    int n1, n2, opcao;

    for(int cont = 0; ; cont++)
    {

        printf("\n Resultado da soma: %d", Soma());
        printf("\n Resultado da subtracao: %d", Subtracao());
        printf("\n Resultado da multiplicacao: %d", Multiplicacao());

        // Laco responsavel por proteger o programa na divisao por 0.
        if(n2 == 0)
        {
            printf("\n Impossivel dividir por zero.");
        }else
            {
                printf("\n Resultado da divisao: %d", Divisao());
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

int Soma()
{
    int soma, num, K, cont;
    soma = 0;

    for(cont = 0; cont < K; cont++)
    {
        soma += num[cont];
    }
    return(soma);
}

int Subtracao()
{
    int subt, num, K;
    subt = 0;

    for(int cont = 0; cont < K; cont++)
    {
        subt -= num[cont];
    }
    return(subt);
}

int Multiplicacao()
{
    int mult, num, K;
    mult = 0;

    for(int cont = 0; cont < K; cont++)
    {
        mult *= num[cont];
    }
    return(mult);
}

int Divisao()
{
    int div, num, K;

    for(int cont = 0; cont < K; cont++)
    {
        div /= num[cont];
    }
    return(div);
}
#endif // ex4

#ifdef ex5
int Soma();
int Subtracao();
int Multiplicacao();
int Divisao();

main()
{
    int n1, n2, opcao, op;

    for(int cont = 0; ; cont++)
    {
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("\n Digite o segundo numero: ");
        scanf("%d", &n2);

        do
        {
            printf("\n ** Digite 1 - Soma;\n ** Digite 2 - Subtracao;\n ** Digite 3 - Multiplicacao;\n ** Digite 4 - Divisao;\n\n");
            printf("\n Opcao: ");
            scanf("%d", &op);

            if(op > 4 && op < 1)
            {
                printf("\n O valor digitado e' invalido. Tente novamente.\n");
            }
        }while(op > 4 && op < 1);

        switch(op)
        {
            case 1:
                 printf("\n Resultado da soma: %d", Soma(n1,n2));
            break;

            case 2:
                printf("\n Resultado da subtracao: %d", Subtracao(n1,n2));
            break;

            case 3:
                 printf("\n Resultado da multiplicacao: %d", Multiplicacao(n1,n2));
            break;

            case 4:
                 // Laco responsavel por proteger o programa na divisao por 0.
                if(n2 == 0)
                {
                    printf("\n Impossivel dividir por zero.");
                }else
                    {
                        printf("\n Resultado da divisao: %d", Divisao(n1,n2));
                    }
            break;
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

int Soma(int x, int y)
{
    return (x+y);
}

int Subtracao(int x, int y)
{
    return(x-y);
}

int Multiplicacao(int x, int y)
{
    return(x*y);
}

int Divisao(int x, int y)
{
    return(x/y);
}
#endif // ex5

#ifdef ex6

int comparaStrings(), result;
char string_A[10];
char string_B[10];

main()
{
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        printf("\n Digite uma palavra de ate 10 digitos A: ");
        scanf("%s", string_A);

        printf("\n Digite uma palavra de ate 10 digitos B: ");
        scanf("%s", string_B);

        // Guarda uma copia da passagem de valores da funcao.
        result = comparaStrings(string_A, string_B);

        // Recebe o retorno de comparaStrings(); e mostra a mensagem correspondente.
        if(result == 0)
        {
        	 printf("\n Sao diferentes.");
		}

		if(result == 1)
		{
			printf("\n Sao iguais.");
		}

		if(result == 2)
		{
			printf("\n 'A' e' maior que 'B'.");
		}

		if(result == 3)
		{
			printf("\n 'A' e' menor que 'B'.");
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

int comparaStrings(char a[10], char b[10])
{
	int cont_A, cont_B, cont, x = 0, cont_i;
	cont_A = 0, cont_B = 0, cont_i = 0;

	// Realiza a comparacao entre os conteudos das strings.
    for(cont = 0; cont < 10; cont++)
    {
        if(a[cont] == b[cont])
         {
             cont_i++;
         }

         if(a[cont] != 0)
         {
         	cont_A++;
		 }

		 if(b[cont] != 0)
		 {
		 	cont_B++;
		 }
    }

     // Exibe a mensagem correspondente: 'igual','diferente','>' ou '<'.
    if(cont_i == 10)
    {
        x = 1;
    }

    if(cont_i != 10)
    {
        x = 0;
    }

    if(cont_A > cont_B)
    {
        x = 2;
    }

    if(cont_A < cont_B)
    {
        x = 3;
    }

    // Reseta os valores das strings.
    for(cont = 0; cont < 10; cont++)
    {
        a[cont] = 0;
        b[cont] = 0;
    }

    return x;
}

#endif // ex6

#ifdef ex7

int Fatorial(int x);

main()
{
    int N, opcao;

    for(int cont = 0; ; cont++)
    {
        // Laco que garante que o numero digitado e' > 0.
        do
        {
            printf("\n Digite um numero para calcular a soma dos algarimos do seu fatorial: ");
            scanf("%d", &N);

            // Protecao caso sejam digitados numeros negativos.
            if(N < 0)
            {
                printf("\n O valor digitado e' invalido. Tente novamente.\n");
            }
        }while(N < 0);

        printf("\n A soma dos algarismos resultados do fatorial e': %d", Fatorial(N));

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

int Fatorial(int x)
{
    int fatorial, soma_fatorial, resto, div, cont;
    fatorial = 1;
    soma_fatorial = 0;
    resto = 0;
    div = 0;

    // Realiza o calculo do fatorial.
    for(cont = x; cont > 0; cont--)
    {
        fatorial *= cont;
    }

    resto = fatorial % 10;
    div = fatorial / 10;
    soma_fatorial = resto + div;

    if(soma_fatorial > 9)
    {
        resto = fatorial % 10;
        div = fatorial / 10;
        soma_fatorial = resto + div;
    }

    return soma_fatorial;
}
#endif // ex7

#ifdef ex8

void tipoTriangulo (float a, float b, float c);
float Positivos();

main()
{
    float ladotri1, ladotri2, ladotri3;
    int cont, opcao;
    cont = 0;
    ladotri1 = 0, ladotri2 = 0, ladotri3 = 0;

	for(cont = 0; ; cont++)
	{
		// O usuario entra com os valores que deseja para o triangulo.
		printf("\n Entre os valores de tres lado do triangulo para saber se ele e': \n Equilatero, Isoceles ou Escaleno.\n");
	    do
	    {
	        printf("\n Lado 1: ");
	        scanf("%f", &ladotri1);

	        printf("\n Lado 2: ");
	        scanf("%f", &ladotri2);

	        printf("\n Lado 3: ");
	        scanf("%f", &ladotri3);

	        if ((ladotri1 + ladotri2 < ladotri3) || (ladotri1 + ladotri3 < ladotri2) || (ladotri2 + ladotri3 < ladotri1))
	        {
	            printf("\n Os valores sao invalidos para formar um triangulo. Tente novamente.\n");
	        }
	    }while ((ladotri1 + ladotri2 < ladotri3) || (ladotri1 + ladotri3 < ladotri2) || (ladotri2 + ladotri3 < ladotri1));

	    tipoTriangulo(ladotri1, ladotri2, ladotri3);

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

// Funcao que compara e retorna o tipo do triangulo.
void tipoTriangulo (float a, float b, float c)
{
    if (a == b && b == c && c == a)
    {
        printf ("\n\n O triangulo e' Equilatero.\n");
    }
    else
        if (a == b || b == c || c == a)
        {
            printf ("\n\n O triangulo e' Isosceles.\n");
        }
    else
    {
        printf ("\n\n O triangulo e' Escaleno.\n");
    }
}
#endif // ex8

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

2 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.

3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().

4 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.

5 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).

6 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.

7 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!.
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.

8 - Escreva um programa que receba tres valores (obrigatoriamente maiores que
    zero), representando as medidas dos tres lados de um triangulo.
    Elabore as seguintes funcoes:
     - Determine se esses valores formam um triangulo, sabendo-se que  um de
       seus lados deve ser maior que o valor absoluto (módulo) da diferença
       dos outros dois lados e menor que a soma dos outros dois lados.
       Veja o resumo da regra abaixo:
       | b - c | < a < b + c
       | a - c | < b < a + c
       | a - b | < c < a + b .
     - Determina se o triangulo e' equilatero (tem os 3 lados iguais).
     - Determina se o triangulo e' isosceles (tem 2 lados iguais).
     - Determina se o triangulo e' escaleno (tem os 3 lados diferentes).
*/

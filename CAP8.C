#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
main()
{
	static char *pc, *pv, c, A[] = {'b','d','f','h','j','l','m','o','q','s','u','w','y'};
    int i, cont_c, opcao;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(int cont = 0; ; cont++)
    {
    	cont_c = 0;
    	pc = &c;
    	pv = &A[0];

        // Usuario entra com o dado a ser pesquisado.
	    printf("\n Digite um caractere a ser pesquisado: ");
	    scanf("%c", pc);

	    // Percorre o ponteiro ate encontrar o finalizador '\0'.
	    for(i = 0; *(pv + i) != '\0'; i++)
	    {
	        if(*pc == *(pv + i))
	        {
	            cont_c++;
	            break;
	        }
	    }

	    // Caso o contador seja '1' significa que o caractere (digitado == armazenado).
	    // Caso contrário, não foi encontrado no vetor o caractere digitado.
	    if(cont_c == 1)
	    {
	        printf("\n O caractere pesquisado e' IGUAL ao armazenado no vetor.");
	    }else
	        {
	            printf("\n O caractere pesquisado e' DIFERENTE ao armazenado no vetor.");
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
#endif

#ifdef ex2
main()
{
    static char A[2][11], *p_string[2];
    int i, c, b = 0;
    int cont_c[2], opcao;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(i = 0; ; i++)
    {
        b = 0; /* Reseta para default o valor do contador.*/

        // Laco responsavel por adcionar o endereço do vetor ao ponteiro.
        for(i = 0; i < 2; i++)
        {
            p_string[i] = &A[i][0];
        }

        for(i = 0; i < 2; i++)
        {
            // Laco responsavel por limitar a string a 10 caracteres.
            do
            {
                cont_c[i] = 0;

                // Entrada de dados digitado pelo usuario.
                printf("\n Digite a %da string: ", i+1);
                gets(p_string[i]);

                // Realiza a contagem dos caracteres inseridos.
                for(c = 0; A[i][c] != '\0'; c++)
                {
                    cont_c[i]++;
                }

                // Caso exceda o numero de caracteres digitado o programa mostra uma mensagem de erro.
                if(cont_c[i] > 10)
                {
                    printf("\n O valor digitado e' invalido. Tente novamente.\n");
                }
            }while(cont_c[i] > 10);
        }

        for(c = 0; p_string[0][c] != '\0'; c++)
        {
            if(p_string[0][c] != p_string[1][c])
            {
                b = 1; /* Realiza a contagem para saber se as strings são iguais ou não.*/
                break;
            }

            if(p_string[0][c] == '\0' && p_string[1][c] == '\0')
            {
                b = 0;
            }
        }

        // Compara o valor do contador 'b' e exibe a mensagem correspondente.
        if(b == 0)
        {
            printf("\n  As strings sao IGUAIS.\n");
        }else
            if(b == 1)
            {
                printf("\n  As strings sao DIFERENTES.\n");
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
#endif

#ifdef ex3
main()
{
    int i, *p_i, opcao;
    long l, *p_l;
    unsigned u, *p_u;
    float f, *p_f;
    double doub, *p_doub;
    unsigned long ul, *p_ul;
    char c, *p_c;
    unsigned char uc, *p_uc;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(int cont = 0; ; cont++)
    {
        // Atribuicao do end. de variaveis aos ponteiros.
        p_i = &i;
        p_l = &l;
        p_u = &u;
        p_f = &f;
        p_doub = &doub;
        p_ul = &ul;
        p_c = &c;
        p_uc = &uc;

        // Entrada de dados atraves do usuario.
        printf("\n Digite um valor inteiro : ");
        scanf("%d", p_i);

        printf("\n Digite um valor long: ");
        scanf("%ld", p_l);

        printf("\n Digite um valor unsigned: ");
        scanf("%u", p_u);

        printf("\n Digite um valor unsigned char: ");
        scanf("%u", p_uc);

        printf("\n Digite um valor float: ");
        scanf("%f", p_f);

        printf("\n Digite um valor double: ");
        scanf("%lf", p_doub);

        printf("\n Digite um valor unsigned long: ");
        scanf("%lu", p_ul);

        fflush(stdin);
        printf("\n Digite um valor char: ");
        scanf("%c", p_c);

        // Mostra na tela o resultado dos valores inseridos pelo usuario.
        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-6d              %-11ld         %-5u\n", *p_i, *p_l, *p_u);
        printf("              %-8.1f            %-9.1lf           %-1c\n", *p_f, *p_doub, *p_c);
        printf("         %-10lu          %-5u", *p_ul, *p_uc);

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
#endif

#ifdef ex4
main()
{
    static char A[5][8];
    char *p_string[5];
    int i, l;
    int cont, opcao;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(int cont = 0; ; cont++)
    {
        // Realiza a contagem dos indices das strings e atribui os endereços aos ponteiros.
        for(i = 0; i < 5; i++)
        {
            p_string[i] = &A[i][0];
        }

        for(i = 0; i < 5; i++)
        {
            // Laco responsavel por restringir o tamanho das strings inseridas pelo usuario.
            do
            {
                cont = 0;

                // Entrada de dados.
                printf("\n Digite o %do nome: ", i+1);
                gets(p_string[i]);

                for(l = 0; p_string[i][l]; l++)
                {
                    cont++;
                }

                // Compara o valor do contador e exibe uma mensagem correspondente.
                // Caso o valor de caracteres seja (cont > 7) -> exibe mensagem de erro.
                if(cont > 7)
                {
                    printf("\n O valor digitado e' invalido. Tente novamente.");
                }

            }while(cont > 7);
        }

        printf("\n        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("  %-8s                                %-8s\n", p_string[0], p_string[4]);
        printf("            %-8s            %-8s\n", p_string[1], p_string[3]);
        printf("                      %-8s\n", p_string[2]);

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
#endif // ex4

#ifdef ex5

struct cadastro
{
    char nome[10];
    char endereco[30];
    char cidade[15];
    char estado[3];
    char cep[10];
};

main()
{

    int opcao;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(int cont = 0; ; cont++)
    {
        struct cadastro *p;
        static struct cadastro pessoa = {"Lucas", "Von Ludwig Bethoveen", "Guaruja", "SP", "255013011"};

        p = &pessoa; /* Atribuicao do endereco da variavel ao ponteiro 'p'.*/

        // Mostra na tela os dados presentes na estrutura 'cadastro'.
        printf("Nome: %s\n", p -> nome);
        printf("Endereco: %s\n", p -> endereco);
        printf("Cidade: %s\n", p -> cidade);
        printf("Estado: %s\n", p -> estado);
        printf("CEP: %s\n", p -> cep);

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
#endif // ex5

#ifdef ex6

struct cadastro
{
    char nome[10];
    char endereco[30];
    char cidade[15];
    char estado[3];
    char cep[9];
};

main()
{
    int i, opcao;

    // Laco responsavel por repetir o programa ate que o usuario escolha finaliza-lo.
    for(i = 0; ; i++)
    {
        static struct cadastro pessoa[4];
        struct cadastro *p[4];

        // Atribui ao ponteiro 'p[]' o endereço do vetor de estruturas 'pessoa[]'.
        for(i = 0; i < 4; i++)
        {
            p[i] = &pessoa[i];
        }

        // Laco responsavel pela entrada dos dados cadastrais pelo usuario.
        printf("\n << Dados Cadastrais >>\n\n");
        for(i = 0; i < 4; i++)
        {
            printf("@@@ Cadastro da Pessoa fisica - %d @@@\n", i + 1);

            printf("\n Nome: ");
            scanf("%s", p[i] -> nome);

            printf("\n Endereco: ");
            scanf("%s", p[i] -> endereco);

            printf("\n Cidade: ");
            scanf("%s", p[i] -> cidade);

            printf("\n Estado: ");
            scanf("%s", p[i] -> estado);

            printf("\n CEP: ");
            scanf("%s", p[i] -> cep);

            printf("\n");
        }

        system("cls"); /* Comando para limpar a tela.*/
        printf("\n << Banco de Dados >>\n\n");

        // Mostra na tela os dados cadastrados pelo usuario.
        for(i = 0; i < 4; i++)
        {
            printf("\n Pessoa fisica - %d\n", i + 1);
            printf("\n Nome: %s\n", p[i] -> nome);
            printf("\n Endereco: %s\n", p[i] -> endereco);
            printf("\n Cidade: %s\n", p[i] -> cidade);
            printf("\n Estado: %s\n", p[i] -> estado);
            printf("\n CEP: %s\n", p[i] -> cep);
            printf("\n");
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
#endif // ex6

#ifdef ex7
main()
{
    float soma;
    int x, *p_x;
    int opcao, cont_positivo = 0;

    for(int i = 0; ; i++)
    {
        soma = 0;
        cont_positivo = 0;
        p_x = &x; /* Atribuicao do endereco da variavel 'x' ao ponteiro 'p_x'.*/

        // Laco responsavel por rodar o codigo ate que o valor digitado seja <= 0.
        do
        {
            // Entrada de dados pelo usuario.
            printf("\n Digite um valor maior que zero: ");
            scanf("%d", p_x);
            getchar();

            // Condicional responsavel por comparar o valor inserido pelo usuario.
            if(*p_x > 0)
            {
                cont_positivo++; /* Contador dos numeros positivos digitados.*/
                soma += *p_x;    /* Soma dos valores do ponteiro 'p_x'.*/
            }else{
                    // Exibe uma mensagem com o resultado dos calculos.
                    printf("\n A soma e': %.f.\n A media e': %.1f\n", soma, soma/cont_positivo);
                 }

        }while(*p_x > 0);

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
#endif // ex7

#ifdef ex8
struct cal
{
    int dia;
    int mes;
    int ano;
};

main()
{
    int cont, dia_i, dia_f, x;
    int mes_i, mes_f, opcao;
    int ano_i, ano_f, i;

    // Laco responsavel por rodar o codigo ate que o valor digitado seja <= 0.
    for(cont = 0; ; cont++)
    {
        int cont_i;
        static struct cal calendario[2];
        struct cal *p[2];

        for(i = 0; i < 4; i++)
        {
            p[i] = &calendario[i];
        }

        printf("\n Descubra o intervalo de tempo entre duas datas.\n");
        for(cont_i = 1; cont_i <= 2; cont_i++)
        {
            // Laco que assegura que os dias sejam validos. (1 < dia < 30)
            do
            {
                // Caso 'cont_i == 1' exibe a mensagem correspondente (dia inicial).
                if(cont_i == 1)
                {
                    printf("\n - Digite o dia inicial: ");
                    scanf("%d", &p[cont_i] -> dia);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (dia final).
                    if(cont_i == 2)
                    {
                        printf("\n\n");
                        printf("\n - Digite o dia final: ");
                        scanf("%d", &p[cont_i] -> dia);
                    }

            }while(calendario[cont_i].dia <= 0 || calendario[cont_i].dia >= 32);

            // Laco que assegura que os meses sejam validos. (1 < mes < 12)
            do
            {
                // Caso 'cont_i == 1' exibe a mensagem correspondente (mes inicial).
                if(cont_i == 1)
                {
                    printf("\n - Digite o mes inicial: ");
                    scanf("%d", &p[cont_i] -> mes);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (mes final).
                    if(cont_i == 2)
                    {
                        printf("\n - Digite o mes final: ");
                        scanf("%d", &p[cont_i] -> mes);
                    }

            }while(calendario[cont_i].mes <= 0 || calendario[cont_i].mes > 12);

            // Laco que assegura que os anos, convencionalmente, sejam validos. (1899 < ano < 2099)
            do
            {
                // Caso 'cont_i == 1' exibe a mensagem correspondente (ano inicial).
                if(cont_i == 1)
                {
                    printf("\n - Digite o ano inicial: ");
                    scanf("%d", &p[cont_i] -> ano);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (ano final).
                    if(cont_i == 2)
                    {
                        printf("\n - Digite o ano final: ");
                        scanf("%d", &p[cont_i] -> ano);
                    }

            }while(calendario[cont_i].ano <= 1899 || calendario[cont_i].ano > 2099);
        }

        if(calendario[1].ano == calendario[2].ano)
        {
            // Calculo mes final e dia inicial.
            mes_f = calendario[1].mes * 30;
            dia_i = mes_f + calendario[1].dia;

            // Calculo mes final e dia final.
            mes_f = calendario[2].mes * 30;
            dia_f = mes_f + calendario[2].dia;

            // Resultado do intervalo de tempo inserido (em dias).
            x = dia_f - dia_i;
        }else
            {
                // Calculo ano inicial e ano final.
                ano_i = calendario[2].ano - calendario[1].ano;
                ano_f = ano_i * 365;

                // Calculo mes final e dia inicial.
                mes_f = calendario[1].mes * 30;
                dia_i = mes_f + calendario[1].dia;

                // Calculo mes final e dia final.
                mes_f = calendario[2].mes * 30;
                dia_f = mes_f + calendario[2].dia;

                // Resultado do intervalo de tempo entre as datas.
                x = (dia_f - dia_i) + ano_f;
            }

        printf("\n O intervalo de tempo entre as datas inseridas foi: %d",x);

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
#endif // ex8

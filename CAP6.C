#include <stdio.h>
#define ex1

#ifdef ex1
struct info
{
    char nome[8];
    char end[30];
    char cidade[20];
    char estado[20];
    int cep;
};

main()
{
    static struct info usuario = {"Juliana","Rua: Ludwig van Beethoven - 32","Bento Goncalves","Rio Grande do Sul", 12045900};
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        // Exibe o 'usuario.nome[cont]'.
        printf("\n Nome do usuario: ");
        for(cont = 0; cont < 8; cont++)
        {
            printf("%c", usuario.nome[cont]);
        }

        // Exibe o 'usuario.end[cont]'.
        printf("\n Endereco do usuario: ");
        for(cont = 0; cont < 30; cont++)
        {
            printf("%c", usuario.end[cont]);
        }

        // Exibe o 'usuario.cidade[cont]'.
        printf("\n Cidade do usuario: ");
        for(cont = 0; cont < 20; cont++)
        {
            printf("%c", usuario.cidade[cont]);
        }

        // Exibe o 'usuario.estado[cont]'.
        printf("\n Estado do usuario: ");
        for(cont = 0; cont < 20; cont++)
        {
            printf("%c", usuario.estado[cont]);
        }

        // Exibe o 'usuario.cep[cont]'.
        printf("\n CEP do usuario: %d", usuario.cep);

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
struct infoAdd
{
    char tel[11];
    char cpf[11];
    char rg[9];
};

struct info
{
    char nome[10];
    char end[20];
    char cidade[20];
    char estado[20];
    char cep[9];
    struct infoAdd info_add;
};


main()
{
    static struct info usuario;
	int cont, opcao;

    for(cont = 0; ; cont++)
    {
    	printf("\n Preencha os dados abaixo.\n");

		// Entra dados de 'usuario.nome'.
        printf("\n - Nome [campo 10]: ");
        scanf("%[^\n]s", usuario.nome);
        getchar();

        // Entra dados de 'usuario.end'.
        printf("\n - Endereco [campo 20]: ");
        scanf("%[^\n]s", usuario.end);
        getchar();

        // Entra dados de 'usuario.cidade'.
        printf("\n - Cidade [campo 20]: ");
        scanf("%[^\n]s", usuario.cidade);
        getchar();

        // Entra dados de 'usuario.estado'.
        printf("\n - Estado [campo 20]: ");
        scanf("%[^\n]s", usuario.estado);
        getchar();

		// Entra dados de 'usuario.cep'.
        printf("\n - CEP [campo 9]: ");
        scanf("%[^\n]s", usuario.cep);
        getchar();

 		// Entra dados de 'usuario.info_add.tel'.
        printf("\n - Telefone [campo 11]: ");
        scanf("%[^\n]s", usuario.info_add.tel);
        getchar();

        // Entra dados de 'usuario.info_add.cpf'.
        printf("\n - CPF [campo 11]: ");
        scanf("%[^\n]s", usuario.info_add.cpf);
        getchar();

    	// Entra dados de 'usuario.info_add.rg'.
        printf("\n - RG [campo 9]: ");
        scanf("%[^\n]s", usuario.info_add.rg);
        getchar();

        // Exibe o 'usuario.nome[cont]'.
        printf("\n Nome do usuario: ");
        for(cont = 0; cont < 10; cont++)
        {
            printf("%c", usuario.nome[cont]);
		}

        // Exibe o 'usuario.end[cont]'.
        printf("\n Endereco do usuario: ");
        for(cont = 0; cont < 20; cont++)
        {
            printf("%c", usuario.end[cont]);
		}

        // Exibe o 'usuario.cidade[cont]'.
        printf("\n Cidade do usuario: ");
        for(cont = 0; cont < 20; cont++)
        {
            printf("%c", usuario.cidade[cont]);
		}

        // Exibe o 'usuario.estado[cont]'.
        printf("\n Estado do usuario: ");
        for(cont = 0; cont < 20; cont++)
        {
            printf("%c", usuario.estado[cont]);
		}

		// Exibe o 'usuario.cep[cont]'.
        printf("\n CEP do usuario: ");
        for(cont = 0; cont < 9; cont++)
        {
            printf("%c", usuario.cep[cont]);
		}

		// Exibe o 'usuario.info_add.tel[cont]'.
        printf("\n Telefone do usuario: ");
        for(cont = 0; cont < 11; cont++)
        {
            printf("%c", usuario.info_add.tel[cont]);
		}

		// Exibe o 'usuario.info_add.cpf[cont]'.
        printf("\n CPF do usuario: ");
        for(cont = 0; cont < 11; cont++)
        {
            printf("%c", usuario.info_add.cpf[cont]);
		}

		// Exibe o 'usuario.info_add.rg[cont]'.
        printf("\n RG do usuario: ");
        for(cont = 0; cont < 9; cont++)
        {
            printf("%c", usuario.info_add.rg[cont]);
		}

		// Reseta os valores para default.
		for(cont = 0; cont < 10; cont++)
        {
            usuario.nome[cont] = 0;
        }

        for(cont = 0; cont < 20; cont++)
        {
            usuario.end[cont] = 0;
            usuario.cidade[cont] = 0;
            usuario.estado[cont] = 0;
        }

        for(cont = 0; cont < 9; cont++)
        {
            usuario.cep[cont] = 0;
            usuario.info_add.rg[cont] = 0;
        }

        for(cont = 0; cont < 11; cont++)
        {
            usuario.info_add.tel[cont] = 0;
            usuario.info_add.cpf[cont] = 0;
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
#endif // ex2

#ifdef ex3
struct info
{
    char nome[10];
    char end[20];
    char cidade[20];
    char estado[20];
    char cep[9];
};

struct info usuario[4];
void Cadastrado(int x);
int opcao;

main()
{
    int cont;

    for(cont = 0; ; cont++)
    {
        for(cont = 0; cont < 4; cont++)
        {
            // Entra com o dado 'usuario[cont].nome'.
            printf("\n - Nome %d [campo 10]: ", cont+1);
            scanf("%s", usuario[cont].nome);

            // Entra com o dado 'usuario[cont].end'.
            printf("\n - Endereco %d [campo 20]: ", cont+1);
            scanf("%s", usuario[cont].end);

            // Entra com o dado 'usuario[cont].cidade'.
            printf("\n - Cidade %d [campo 20]: ", cont+1);
            scanf("%s", usuario[cont].cidade);

            // Entra com o dado 'usuario[cont].estado'.
            printf("\n - Estado %d [campo 20]: ", cont+1);
            scanf("%s", usuario[cont].estado);

           // Entra com o dado 'usuario[cont].cep'.
            printf("\n - CEP %d [campo 9]: ", cont+1);
            scanf("%s", usuario[cont].cep);
            printf("\n\n");
        }

        for(cont = 0; ; cont++)
        {
            // O usuario escolhe nas opcoes de 1 a 4 qual dados de cadastro deseja.
            do
            {
                printf("\n Escolha um usuario para ver as informacoes de cadastro.\n");
                printf("\n Digite (1 ate 4) p/ dados cadastrados ou (-1) p/ sair: ");
                scanf("%d", &opcao);

            }while(opcao > 3 && opcao < 0);

                // Muda para opcao conforme digitado pelo usuario.
                switch(opcao)
                {
                    // Caso seja o usuario 1.
                    case 1:
                        Cadastrado(opcao);
                    break;

                    // Caso seja o usuario 2.
                    case 2:
                        Cadastrado(opcao);
                    break;

                    // Caso seja o usuario 3.
                    case 3:
                        Cadastrado(opcao);
                    break;

                    // Caso seja o usuario 4.
                    case 4:
                        Cadastrado(opcao);
                    break;

                }

             // Saida do laco.
             if(opcao == -1)
             {
                 break;
             }
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

void Cadastrado(int x)
{
    printf("\n Nome do usuario: ");
    printf("%s", usuario[x-1].nome);

    printf("\n Endereco do usuario: ");
    printf("%s", usuario[x-1].end);

    printf("\n Cidade do usuario: ");
    printf("%s", usuario[x-1].cidade);

    printf("\n Estado do usuario: ");
    printf("%s", usuario[x-1].estado);

    printf("\n CEP do usuario: ");
    printf("%s", usuario[x-1].cep);
}
#endif // ex3

#ifdef ex4
struct dados
{
    char nome[10];
    char esporte[10];
    int idade;
    float altura;
};

struct dados atleta[5];
struct dados sup;
void CadastroAtleta();

main()
{
    int cont, cont_i, subt, opcao;
    subt = 1;

    for(cont = 0; ; cont++)
    {
        for(cont = 0; cont < 5; cont++)
        {
            printf("\n - Nome do %do atleta: ", cont+1);
            scanf("%s", &atleta[cont].nome);

            printf("\n - Esporte do %do atleta: ", cont+1);
            scanf("%s", &atleta[cont].esporte);

            printf("\n - Idade do atleta: ", cont+1);
            scanf("%d", &atleta[cont].idade);

            printf("\n - Altura do atleta: ", cont+1);
            scanf("%f", &atleta[cont].altura);
            printf("\n\n");
        }

        // Laco responsavel ordenacao de atleta mais velho para o mais novo.
        cont = 1;
        do
        {
            sup = atleta[cont];
            for(cont_i = cont; cont_i > 0 && sup.idade > atleta[cont_i - subt].idade; cont_i--)
                atleta[cont_i] = atleta[cont_i - subt];
                atleta[cont_i] = sup;
            cont++;
        }while(cont < 5);

        printf("\n Ordem decrescente de idade dos atletas:\n");

        // Chamada da funcao CadastroAtleta();
        CadastroAtleta();

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

void CadastroAtleta()
{
    for(int cont = 0; cont < 5; cont++)
    {
        printf("\n Nome do atleta: ");
        printf("%s", atleta[cont].nome);

        printf("\n Esporte do atleta: ");
        printf("%s", atleta[cont].esporte);

        printf("\n Idade do atleta: %d", atleta[cont].idade);
        printf("\n Altura do atleta: %.2f", atleta[cont].altura);
        printf("\n\n");
    }
}
#endif // ex4

#ifdef ex5
struct cartesiano
{
    int XA;
    int XB;
    int YA;
    int YB;
};

struct cartesiano coordenada;
void CalculoCoord();

main()
{
    int opcao, cont;

    for(cont = 0; ; cont++)
    {
        printf("\n Faca o calculo da distancia entre dois pontos no plano cartesiano.\n");
        // O usuario insere os pontos desejados a ser calculado.
        printf("\n - Digite a coordenada XA: ");
        scanf("%d", &coordenada.XA);

        printf("\n - Digite a coordenada XB: ");
        scanf("%d", &coordenada.XB);

        printf("\n - Digite a coordenada YA: ");
        scanf("%d", &coordenada.YA);

        printf("\n - Digite a coordenada YB: ");
        scanf("%d", &coordenada.YB);

        CalculoCoord(); /* Chamada da funcao 'CalculoCoord();'*/

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

void CalculoCoord()
{
    float x;
    x = 0;

    // Calculo matematico da distancia entre dois pontos.
    x = (((coordenada.XB - coordenada.XA) * (coordenada.XB - coordenada.XA)) +
        ((coordenada.YB - coordenada.YA) * (coordenada.YB - coordenada.YA))) ^ (1/2);

    // Exibe o resultado da distancia entre os pontos.
    printf("\n ** A distancia entre Xa e Xb foi: %.2f **\n", x);
}
#endif // ex5

#ifdef ex6
struct cal
{
    int dia;
    int mes;
    int ano;
};

struct cal calendario[2];

main()
{
    int cont, dia_i, dia_f, x;
    int mes_i, mes_f, opcao;
    int ano_i, ano_f;

    for(cont = 0; ; cont++)
    {
        int cont_i;

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
                    scanf("%d", &calendario[cont_i].dia);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (dia final).
                    if(cont_i == 2)
                    {
                        printf("\n\n");
                        printf("\n - Digite o dia final: ");
                        scanf("%d", &calendario[cont_i].dia);
                    }

            }while(calendario[cont_i].dia <= 0 || calendario[cont_i].dia >= 32);

            // Laco que assegura que os meses sejam validos. (1 < mes < 12)
            do
            {
                // Caso 'cont_i == 1' exibe a mensagem correspondente (mes inicial).
                if(cont_i == 1)
                {
                    printf("\n - Digite o mes inicial: ");
                    scanf("%d", &calendario[cont_i].mes);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (mes final).
                    if(cont_i == 2)
                    {
                        printf("\n - Digite o mes final: ");
                        scanf("%d", &calendario[cont_i].mes);
                    }

            }while(calendario[cont_i].mes <= 0 || calendario[cont_i].mes > 12);

            // Laco que assegura que os anos, convencionalmente, sejam validos. (1899 < ano < 2099)
            do
            {
                // Caso 'cont_i == 1' exibe a mensagem correspondente (ano inicial).
                if(cont_i == 1)
                {
                    printf("\n - Digite o ano inicial: ");
                    scanf("%d", &calendario[cont_i].ano);
                }else

                // Caso 'cont_i == 2' exibe a mensagem correspondente (ano final).
                    if(cont_i == 2)
                    {
                        printf("\n - Digite o ano final: ");
                        scanf("%d", &calendario[cont_i].ano);
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
#endif // ex6

#ifdef ex7
struct var
{
    char c;
    int i;
    long l;
    float f;
    double doub;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
};

main()
{
    static struct var tipo_var = {'j', 32767, 2147483647, 3.4E+38, 1.7E+308, 255, 65535, 4294967295};
    int opcao;

    for(int cont = 0; ; cont++)
    {
        printf("\n char: %c", tipo_var.c);
        printf("\n int: %d", tipo_var.i);
        printf("\n long: %ld", tipo_var.l);
        printf("\n double: %g", tipo_var.doub);
        printf("\n unsigned char: %u", tipo_var.uc);
        printf("\n unsigned int: %u", tipo_var.ui);
        printf("\n unsigned long: %lu", tipo_var.ul);

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
#endif // ex7

#ifdef ex8
struct var
{
    char c;
    int i;
    long l;
    float f;
    double doub;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
};

main()
{
    struct var tipo_var;
    int opcao;

    for(int cont = 0; ; cont++)
    {
        printf("\n Digite um valor para char: ");
        scanf("%d", &tipo_var.c);

        printf("\n Digite um valor para int: ");
        scanf("%d", &tipo_var.i);

        printf("\n Digite um valor para long: ");
        scanf("%ld", &tipo_var.l);

        printf("\n Digite um valor para float: ");
        scanf("%f", &tipo_var.f);

        printf("\n Digite um valor para double: ");
        scanf("%g", &tipo_var.doub);

        printf("\n Digite um valor para unsigned char: ");
        scanf("%u", &tipo_var.uc);

        printf("\n Digite um valor para unsigned int: ");
        scanf("%u", &tipo_var.ui);

        printf("\n Digite um valor para unsigned long: ");
        scanf("%lu", &tipo_var.ul);

        printf("\n        10        20        30        40        50        60        70");
        printf("\n1234567890123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-4d      %-6d    %-11d         %-8g            %-9g", tipo_var.c, tipo_var.i, tipo_var.l, tipo_var.f, tipo_var.doub);
        printf("\n          %-3u                 %-5u               %-10lu", tipo_var.uc, tipo_var.ui, tipo_var.ul);

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

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo
    e inicialize-a com algum conteudo. Imprima estes conteudos no video.
             nome, end, cidade, estado, cep

2 - Crie outra estrutura de dados com os membros abaixo. Acrescente esta nova
    estrutura a estrutura de dados do exercicio anterior (estrutura dentro de
    outra estrutura) como mais um membro e receba via teclado todos os dados.
    Declare a variavel como local e imprima estes conteudos no video.
             tel, cpf, rg

3 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep

4 - Defina uma estrutura representando um atleta com os campos nome do
    atleta, seu esporte, idade e altura. Escreva um programa que leia os
    dados de cinco atletas. Exiba por ordem de idade, do mais velho para o
    mais novo.

5 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto

6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura. Calcule e exiba o numero de dias
    que decorrem entre as duas datas.

7 - Escreva um programa que tem uma estrutura da dados com os membros abaixo e
    inicialize-a com algum conteudo. Imprima estes conteudos no video.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

8 - Com a estrutura de dados do exercicio anterior, entre pelo teclado o
    conteudo de cada um dos membros e imprima-os no video no seguinte
    fomato.
            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/

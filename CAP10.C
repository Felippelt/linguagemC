#include <stdio.h>
#include <stdlib.h>
#define ex3

#ifdef ex1
typedef struct cadastro
{
    char nome[15];
    char endereco[30];
    char cidade[30];
    char estado[25];
    char cep[10];
}dados;

main()
{
    FILE *arq; /* Criacao de um ponteiro de arquivo.*/
    int opcao, i;
    dados pessoa = {"Manoel", "Rua 4", "Santos", "SP", "11000900"};

    // Laco responsavel por repetir o programa ate que o usuario escolha encerra-lo.
    for(i = 0; ; i++)
    {
        dados *p = &pessoa;

        // Condicional responsavel por criar ou abrir o arquivo gerado.
        if((arq = fopen("ex1_CAP10.txt", "w")) == NULL)
        {
            // Exibe uma mensagem caso ocorra erro na abertura do arquivo.
            puts("\n Ocorreu um erro durante a abertura do arquivo. Tente novamente.\n");
            exit(0);
        }

        escreveDados(arq, p); /* Chamada da funcao 'escreveDados()'*/
        printf("\n Dados Gravados no Arquivo: \n");
        printf("\n - NOME: %s\n - ENDERECO: %s\n - CIDADE: %s\n - ESTADO: %s\n - CEP: %s\n", p -> nome, p -> endereco, p -> cidade, p -> estado, p -> cep);

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

// Funcao responsavel por gravar/escrever os dados no arquivo.
escreveDados(FILE *arq, dados *p)
{
    int cont;

    // Laco responsavel por percorrer cada caractere ate o '\0' e escrever no arquivo.
    for(cont = 0; p -> nome[cont] != '\0'; cont++)
    {
        putc(p -> nome[cont], arq); /* Funcao que permite a escrita de um caractere por vez no arquivo.*/
    }
    putc('\n', arq);

    // '...' -> Os demais lacos possuem o mesmo significado do primeiro.
    for(cont = 0; p -> endereco[cont] != '\0'; cont++)
    {
        putc(p -> endereco[cont], arq);
    }
    putc('\n', arq);

    // ...
    for(cont = 0; p -> cidade[cont] != '\0'; cont++)
    {
        putc(p -> cidade[cont], arq);
    }
    putc('\n', arq);

    // ...
    for(cont = 0; p -> estado[cont] != '\0'; cont++)
    {
        putc(p -> estado[cont], arq);
    }
    putc('\n', arq);

    // ...
    for(cont = 0; p -> cep[cont] != '\0'; cont++)
    {
        putc(p -> cep[cont], arq);
    }
    fclose(arq); /* Funcao responsavel por fechar o arquivo.*/
}
#endif // ex1

#ifdef ex2
typedef struct cadastro
{
    char nome[15];
    char endereco[30];
    char cidade[30];
    char estado[25];
    char cep[10];
}dados;

main()
{
    FILE *arq;
    int opcao, i;
    dados pessoa = {"Manoel", "Rua 4", "Santos", "SP", "11000900"};

    // Laco responsavel por repetir o programa ate que o usuario escolha encerra-lo.
    for(i = 0; ; i++)
    {
        dados *p = &pessoa;

        // Condicional responsavel por abrir e ler o arquivo gerado.
        if((arq = fopen("ex1_CAP10.txt", "r")) == NULL)
        {
            // Exibe uma mensagem caso ocorra erro na abertura do arquivo.
            puts("\n Ocorreu um erro durante a abertura do arquivo. Tente novamente.\n");
            exit(0);
        }
        lerArquivo(arq, p); /* Chamada da funcao 'lerArquivo()'*/

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

// Funcao responsavel por ler os dados gravados no arquivo.
lerArquivo(FILE *arq, dados *p)
{
    for(int cont = 0; cont < sizeof(dados); cont++) /* sizeof(dados) -> determina o tamanho em bytes da classe 'dados'.*/
    {
        putchar(getc(arq)); /* Funcao responsavel por ler e mostrar o conteudo do arquivo na tela.*/
    }
    fclose(arq); /* Funcao responsavel por fechar o arquivo.*/
}
#endif // ex2

#ifdef ex3
typedef struct cadastro
{
    char nome[15];
    char endereco[30];
    char cidade[30];
    char estado[25];
    char cep[10];
}dados;

dados pessoa;

main()
{
    FILE *arq;
    int opcao, i;

    // Laco responsavel por repetir o programa ate que o usuario escolha encerra-lo.
    for(i = 0; ; i++)
    {
        dados *p = &pessoa;

        // Condicional responsavel por abrir e escrever no arquivo gerado.
        if((arq = fopen("ex1_CAP10.txt", "w+"))== NULL)
        {
            // Exibe uma mensagem caso ocorra erro na abertura do arquivo.
            puts("\n Ocorreu um erro durante a abertura do arquivo. Tente novamente.\n");
            exit(0);
        }
        escreverArq(arq, p); /* Chama a funcao 'escreverArq()'*/
        leituraArq(arq, p);  /* Chama a funcao 'leituraArq()'*/
        fclose(arq);         /* Funcao responsavel por fechar o arquivo.*/

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

// Funcao responsavel por escrever os dados no arquivo.
void escreverArq(FILE *arq, dados *p)
{
    printf("\n Executando a funcao 'fwrite'...\n");

    // Insere o conteudo na variavel 'nome' e armazena na estrutura de dados.
    printf("\n NOME: ");
    gets(pessoa.nome);

    // Insere o conteudo na variavel 'endereco' e armazena na estrutura de dados.
    printf("\n ENDERECO: ");
    gets(pessoa.endereco);

    // Insere o conteudo na variavel 'cidade' e armazena na estrutura de dados.
    printf("\n CIDADE: ");
    gets(pessoa.cidade);

    // Insere o conteudo na variavel 'estado' e armazena na estrutura de dados.
    printf("\n ESTADO: ");
    gets(pessoa.estado);

    // Insere o conteudo na variavel 'cep' e armazena na estrutura de dados.
    printf("\n CEP: ");
    gets(pessoa.cep);

    fwrite(&pessoa, sizeof(pessoa), 1, arq); /* Funcao responsavel por fazer a escrita de dados compostos no arquivo.*/
}

// Funcao responsavel por ler os dados gravados no arquivo.
void leituraArq(FILE *arq, dados *p)
{
    fseek(arq, 0, 0); /* Funcao utilizada para posicionar o ponteiro num determinado ponto.*/
    fread(&pessoa, sizeof(pessoa), 1, arq); /* Funcao responsavel por ler dados compostos no arquivo.*/

    printf("\n Executando a funcao 'fread'...\n");
    printf("\n  - NOME: %s\n  - ENDERECO: %s\n  - CIDADE: %s\n  - ESTADO: %s\n  - CEP: %s\n",
    p -> nome, p -> endereco, p -> cidade, p -> estado, p -> cep);
}
#endif // ex3

#ifdef ex4
main()
{
    FILE *arq;
    int cont_c, cont, opcao;
    char caract;

    for(cont = 0; ; cont++)
    {
        cont_c = 0;   /* Reseta o contador de caracteres.*/
        caract = '*'; /* Reseta o caractere para seu valor default.*/

        // Condicional responsavel por abrir e escrever no arquivo gerado.
        if((arq = fopen("arq.txt", "w+")) == NULL)
        {
            // Exibe uma mensagem de erro caso ocorra erro na abertura do arquivo.
            puts("\n Ocorreu um erro durante a abertura do arquivo. Tente novamente.\n");
            exit(0);
        }

        // Laco de repeticao responsavel pela escrita dos caracteres.
        // O laco e' interrompido caso o caractere digitado pelo usuario seja '0'.
        for(cont = 0; caract != '0'; cont++)
        {
            printf("\n Digite um caractere para ser armazenado: ");
            scanf("%c", &caract);
            getchar();

            putc(caract, arq); /* Funcao que permite a escrita de um caractere por vez no arquivo.*/
            cont_c++;
        }

        fseek(arq, 0, 0); /* Posiciona o ponteiro num ponto determinado*/
        printf("\n\n Os caracteres armazenados sao: ");

        // Laco de repeticao responsavel por exibir os caracteres armazenados no arquivo.
        for(cont = 0; cont < cont_c-1; cont++)
        {
            putchar(getc(arq));
        }
        fclose(arq); /* Funcao responsavel por fechar o arquivo.*/

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

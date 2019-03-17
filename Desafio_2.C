#include <stdio.h>
#define ex1

#ifdef ex1
struct tipoVar
{
    int i[10];
    long l[10];
    float f[10];
};

struct tipoVar tipo[2];
void EntrarDados();
void ImprimaValores();
void SubtraiInt();
void ProdutoLong();
void DivFloat();

main()
{
	int opcao, cont;

	for(cont = 0; ; cont++)
	{
		EntrarDados(); 		  // Chamada da funcao 'EntrarDados();'
	    ImprimaValores();     // Chamada da funcao 'ImprimaValores();'
	    SubtraiInt();	      // Chamada da funcao 'SubtraiInt();'
	    ProdutoLong();        // Chamada da funcao 'ProdutoLong();'
	    DivFloat();           // Chamada da funcao 'DivFloat();'

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


void EntrarDados()
{
	int cont, cont_i;

	printf("\n******************** Insira valores ********************\n");
	for(cont_i = 0; cont_i < 2; cont_i++)
	{
		printf("\n\n << Valores bloco %d >> \n", cont_i+1);
		for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n Digite o %do valor para int[%d][%d]: ", cont+1, cont_i, cont);
	        scanf("%d", &tipo[cont_i].i[cont]);
	    }

		printf("\n");
	    for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n Digite o %do valor para long[%d][%d]: ", cont+1, cont_i, cont);
	        scanf("%ld", &tipo[cont_i].l[cont]);
	    }

		printf("\n");
	    for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n Digite o %do valor para float[%d][%d]: ", cont+1, cont_i, cont);
	        scanf("%f", &tipo[cont_i].f[cont]);
	    }
	}
}

void ImprimaValores()
{
	int cont, cont_i;

	printf("\n******************** Valores guardados ********************\n");
	for(cont_i = 0; cont_i < 2; cont_i++)
	{
		printf("\n\n << Valores bloco %d >> \n", cont_i+1);
		for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n O valor de int[%d][%d] e': %d", cont_i, cont, tipo[cont_i].i[cont]);
	    }

		printf("\n");
	    for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n O valor de long[%d][%d] e': %ld", cont_i, cont, tipo[cont_i].l[cont]);
	    }

		printf("\n");
	    for(cont = 0; cont < 10; cont++)
	    {
	        printf("\n O valor de float[%d][%d] e': %.2f", cont_i, cont, tipo[cont_i].f[cont]);
	    }
	}
}

void SubtraiInt()
{
	int cont, cont_i, subt[10];

	printf("\n\n******************** Subtracao int ********************\n");
	for(cont = 0; cont < 10; cont++)
	{
		subt[cont] = tipo[0].i[cont] - tipo[1].i[cont];
		printf("\n O resultado da subtracao de int[0][%d] - int[1][%d] = %d", cont, cont, subt[cont]);
	}
}

void ProdutoLong()
{
	int cont, cont_i, prod[10];

	printf("\n\n******************** Produto long ********************\n");
	for(cont = 0; cont < 10; cont++)
	{
		prod[cont] = tipo[0].l[cont] * tipo[1].l[cont];
		printf("\n O resultado do produto de long[0][%d] * long[1][%d] = %ld", cont, cont, prod[cont]);
	}
}

void DivFloat()
{
	int cont, cont_i;
	float div[10];

	printf("\n\n******************** Divisao float ********************\n");
	for(cont = 0; cont < 10; cont++)
	{
		div[cont] = tipo[0].f[cont] / tipo[1].f[cont];
		printf("\n O resultado da divisao de float[0][%d] / float[1][%d] = %.2f", cont, cont, div[cont]);
	}
}
#endif // ex1

#ifdef ex2
struct caract
{
    char nome[10];
    int numero;
    int estoque_min;
    float preco;
};

struct caract produto[10];
void EntrarDados();
void ImprimirDados();
void ItensVenda();

main()
{
    EntrarDados();
    ImprimirDados();
    ItensVenda();
}

void EntrarDados()
{
    int cont, cont_i;

    printf("\n************ Preencha os dados dos produtos *************\n");
    for(cont = 0; cont < 10; cont++)
    {
        printf("\n");

        printf("\n Digite o nome do %do item: ", cont+1);
        scanf("%[^\n]s", produto[cont].nome);
        getchar();

        printf("\n Digite a quantidade do %do item: ", cont+1);
        scanf("%d", &produto[cont].numero);
        getchar();

        printf("\n Digite o preco do %do item: ", cont+1);
        scanf("%f", &produto[cont].preco);
        getchar();

        printf("\n Digite o estoque minimo do %do item: ", cont+1);
        scanf("%d", &produto[cont].estoque_min);
        getchar();
    }
}

void ImprimirDados()
{
    int cont, cont_i;

    printf("\n******************** Valores guardados ********************\n");
    for(cont_i = 0; cont_i < 10; cont_i++)
    {
        printf("\n");
        printf("\n O nome do item %do e': ", cont_i+1);

        for(cont = 0; cont < 10; cont++)
        {
            printf("%c", produto[cont_i].nome[cont]);
        }
        printf("\n A quantidade do %do item e': %d", cont_i+1, produto[cont_i].numero);
        printf("\n O preco do %do item e': R$ %.2f", cont_i+1, produto[cont_i].preco);
        printf("\n O estoque minimo do %do item e': %d", cont_i+1, produto[cont_i].estoque_min);
    }
}

void ItensVenda()
{
    int cont, n, total[10], cont_i, cont_c, x;
    char palavra[10];

    cont_c = 0;
    x = 0;

    printf("\n******************** Compras ********************\n");
    do
    {
        printf("\n Pesquise por um item da lista: ");
        scanf("%c", &palavra);

        for(cont_i = 0; cont_i != 10; cont_i++)
        {
            for(cont = 0; cont < 10; cont++)
            {
                if(palavra[cont] == produto[cont_i].nome[cont])
                {
                    cont_c++;
                }
            }
        }

        if(cont_c != 10)
        {
            printf("\n O item digitado nao e' invalido. Tente novamente.\n");
        }
    }while(cont_c != 10);


        printf("\n Digite a quantidade desejada do item: ");
        scanf("%d", &n);

	do
	{
		for(cont_i = 0; cont_i < 10; cont_i++)
        {
            for(cont = 0; cont < 10; cont++)
            {
                for(cont = 0; palavra[cont] != produto[cont_i].nome[cont]; cont++)
                {
                    total[cont] = produto[cont_i].numero - produto[cont_i].estoque_min;
                }
            }
        }

        if(n > total[cont])
        {
            printf("\n O valor digitado e' invalido. Tente novamente.\n");
        }
	}while(n > total[cont]);


}
#endif // ex2


/*
    Obs.: Os programas devem ser finalizados pelo usuário.

    1) Com a estrutura de dados abaixo, defina um vetor de tamanho 2. Crie as seguintes funções:
    A - receba os dados via teclado
    B – imprima no vídeo os dados recebidos
    C – subtraia os elementos int
    D – multiplique os elementos long
    E – divida os elementos float
    Imprima os resultados no vídeo mostrando o índice de cada elemento nas funções C, D e E..

    Estrutura : inteiro 10, long 10 e float 10(vetor como membro da estrutura).

    2) Com a estrutura de dados abaixo, defina um vetor de tamanho 10. Crie as seguintes funções:
    A – receba dados via teclado
    B – imprima no vídeo os dados recebidos
    C – monta os itens de uma venda (pesquise pelo nome)
    D – mostre os itens incluídos na venda e o valor total da venda

    Estrutura: nome do item, quantidade, estoque mínimo e preço do item.
*/

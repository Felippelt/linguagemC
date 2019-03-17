#include <stdio.h>
#include <stdlib.h>
#define ex8

#ifdef ex1
int Pesquisa(char *a, char *l);

main()
{
    int pesq, opcao, cont;
    char charact, *l;
    char A[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char *p;

    p = &A[0];
    l = &charact;

    for(cont = 0; ; cont++)
    {
        // Usuario entra com a letra desejada.
        printf("\n Digite uma letra: ");
        scanf("%c", l);

        // Guarda-se uma copia do valor 'a'.
        pesq = Pesquisa(p, l);

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

int Pesquisa(char *a, char *l)
{

    // Percorre o vetor comparando a letra digitada ao conteudo do vetor.
    for(int cont = 0; *(a+cont) != '\0'; cont++)
    {
        if(*l == *(a+cont))
        {
            return 1;
        }
    }
    return 0;
}
#endif

#ifdef ex2

int comparaStrings(char *a, char *b), result;

main()
{
    int cont, opcao;
    char string_A[10], *a;
    char string_B[10], *b;

    for(cont = 0; ; cont++)
    {
        a = &string_A[0];
        b = &string_B[0];

        printf("\n Digite uma palavra de ate 10 digitos A: ");
        scanf("%s", a);

        printf("\n Digite uma palavra de ate 10 digitos B: ");
        scanf("%s", b);

        // Guarda uma copia da passagem de valores da funcao.
        result = comparaStrings(a, b);

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
        getchar();
    }
}

int comparaStrings(char *a, char *b)
{
	int cont_A, cont_B, cont, x = 0, cont_i;
	cont_A = 0, cont_B = 0, cont_i = 0;

	// Realiza a comparacao entre os conteudos das strings.
    for(cont = 0; *(a+cont) != '\0' && *(a+cont) != '\0'; cont++)
    {
        if(*(a+cont) == *(b+cont))
         {
             cont_i++;
         }

         if(*(a+cont) != 0)
         {
         	cont_A++;
		 }

		 if(*(b+cont) != 0)
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
#endif // ex2

#ifdef ex3
struct tipovar
{
    char c;
    long l;
    int i;
    float f;
    double doub;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
};

// Funcao para entrada de dados pelo usuario.
entrarDados(struct tipovar *p)
{
    printf("\n Digite um valor para variavel long l = ");
    scanf("%ld", &p -> l);

    printf("\n Digite um valor para variavel int i = ");
    scanf("%d", &p -> i);

    printf("\n Digite um valor para variavel float f = ");
    scanf("%f", &p -> f);

    printf("\n Digite um valor para variavel double doub = ");
    scanf("%lf", &p -> doub);

    printf("\n Digite um valor para variavel char c = ");
    scanf("%d", &p -> c);

    printf("\n Digite um valor para variavel unsigned char p_uc = ");
    scanf("%u", &p -> uc);

    printf("\n Digite um valor para variavel unsigned int p_ui = ");
    scanf("%u", &p -> ui);

    printf("\n Digite um valor para variavel unsigned long p_ul = ");
    scanf("%lu", &p -> ul);
}

// Funcao para imprimir os dados inseridos pelo usuario.
imprimirDados(struct tipovar *p)
{
    printf("\n\n        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-4d      %-6d    %-11ld         %-8g            %-9g\n", p -> c, p -> i, p -> l, p -> f, p -> doub);
    printf("          %-3d                 %-5u               %-10lu", p -> uc, p -> ui, p -> ul);
}

main()
{
    int opcao;

    for(int cont = 0; ; cont++)
    {
        static struct tipovar variavel;
        struct tipovar *p;

        p = &variavel;     /*Indica para qual end. de variavel o ponteiro apontará.*/

        entrarDados(p);    /*Chama a função 'entrarDados()'.*/
        imprimirDados(p);  /*Chama a função 'imprimirDados()'.*/

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
#endif // ex3

#ifdef ex4

// Realiza a soma dos n valores digitados.
float Soma(float *x, float *y)
{
    *x += *y;
}

// Realiza a subtracao dos n valores digitados.
float Subtracao(float *x, float *y)
{
    *x -= *y;
}

// Realiza a multiplicacao dos n valores digitados.
float Multiplicacao(float *x, float *y)
{
    *x *= *y;
}

// Realiza a divisao dos n valores digitados.
float Divisao(float *x, float *y)
{
    *x /= *y;
}

float realizarOperacao()
{
    float n1, n2;
    float *p_n1, *p_n2;
    char operador;

    p_n1 = &n1;
    p_n2 = &n2;

    printf("\n Digite o 1o valor: ");
    scanf("%f", p_n1);
    getchar();

    // Laco que realiza a repeticao ate que o valor digitado seja o operador '='.
    do
    {
        do
        {
            printf("\n Digite o operador desejado p/ efetuar a conta: ");
            scanf("%c", &operador);

            if(operador != '+' && operador != '-' && operador != '*' && operador != '/' && operador != '=')
            {
                printf("\n O operador digitado nao existe. Tente novamente.");
            }
        }while(operador != '+' && operador != '-' && operador != '*' && operador != '/' && operador != '=');


        // Se o operador for diferente de '=' o programa prossegue.
        if(operador != '=') {
            printf("\n Digite o proximo valor: ");
            scanf("%f", p_n2);
            getchar();
        }

        // Faz a chamada da funcao correspondente ao operador escolhido pelo usuario.
        switch(operador)
        {
            case'+':
                Soma(p_n1, p_n2);
            break;

            case'-':
                Subtracao(p_n1, p_n2);
            break;

            case'*':
                Multiplicacao(p_n1, p_n2);
            break;

            case'/':
                Divisao(p_n1, p_n2);
            break;

            case'=':
                return *p_n1;
            break;
        }
    }while(operador != '=');
}

main()
{
    int opcao;

    for(int cont = 0; ; cont++)
    {
        printf("\n O resultado e': %.2f\n", realizarOperacao());

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

// Funcao responsavel por receber os dados do usuario.
int inserirDados(char *p_string[])
{
    int i, c, cont_c[2], x = 0;
	int *p_cont;

	// O ponteiro 'p_cont' aponta para o vetor 'cont_c[0]'.
	p_cont = &cont_c[0];

    for(i = 0; i < 5; i++)
    {
        do
        {
			cont_c[i] = 0;
	        printf("\n Digite a %da string: ", i + 1);
        	gets(p_string[i]);

            // Laco responsavel pela contagem limite de strings.
			for(c = 0; p_string[i][c] != '\0'; c++)
            {
                cont_c[i]++;
            }

            // Caso o numero limite de strings seja excedido exibe-se a mensagem de erro.
			if(cont_c[i] > 7)
            {
	        	printf("\n O valor digitado e' invalido. Tente novamente.\n");
            }
        }while(cont_c[i] > 7);
    }
}

// Funcao responsavel por imprimir o resultado na tela.
imprimirResultado(char *p_string[])
{
    printf("\n\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-8s                                %-8s\n", p_string[0], p_string[4]);
    printf("            %-8s            %-8s\n", p_string[1], p_string[3]);
    printf("                      %-8s", p_string[2]);
}

main()
{
    int opcao, i;
    static char A[5][8];

    // Laco responsavel por repetir o programa ate que o usuario decida sair.
	for(int cont = 0; ; cont++)
    {
        char *p_string[5];

        // Laco responsavel pela contagem dos nomes (1 a 5).
        for(i = 0; i < 5; i++)
        {
            p_string[i] = &A[i];
        }

        inserirDados(p_string);         // Chamada da funcao 'inserirDados()'
        imprimirResultado(p_string);    // Chamada da funcao 'imprimirResultado()'

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
    char nome[15];
    char endereco[30];
    char cidade[15];
    char estado[3];
    char cep[9];
};

// Funcao para insercao dos dados cadastrais do usuario.
inserirDados(struct cadastro *p)
{
	fflush(stdin);

    printf("\n Nome: ");
    gets(p -> nome);

    printf("\n Endereco: ");
    gets(p -> endereco);

    printf("\n Cidade: ");
    gets(p -> cidade);

    printf("\n Estado: ");
    gets(p -> estado);

    printf("\n CEP: ");
    gets(p -> cep);
}

// Funcao para impressao na tela dos dados cadastrados pelo usuario.
imprimirDados(struct cadastro *p)
{
    printf("\n Nome: %s\n", p -> nome);
    printf("\n Endereco: %s\n", p -> endereco);
    printf("\n Cidade: %s\n", p -> cidade);
    printf("\n Estado: %s\n", p -> estado);
    printf("\n CEP: %s\n", p -> cep);
}

main()
{
    static struct cadastro indiv;
    struct cadastro *p_indiv;
    int opcao;

    p_indiv = &indiv; /*O ponteiro 'p_indiv' aponta p/ o end. variavel 'indiv'*/

    // Exibe o menu com as opcoes para a escolha do usuario.
	printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");

	// Laco que permite que o programa execute ate que a opcao 3 seja escolhida (encerramento).
    do
    {
        // Laco para a escolha da opcao desejada.
        do
        {
            printf("\n Desejo a opcao: ");
            scanf("%d", &opcao);
        }while(opcao < 0 && opcao > 4);

        switch(opcao)
        {
            case 1:
                system("cls");
                printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");
                printf("\n<======== Secao de Cadastro ========>\n");
                inserirDados(p_indiv); // Chamada da funcao 'inserirDados()'.
                printf("\n");
            break;

            case 2:
                system("cls");
                printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");
                printf("\n<======== Secao de Dados Cadastrados ========>\n");
                imprimirDados(p_indiv); // Chamada da funcao 'imprimirDados()'.
                printf("\n");
            break;

            case 3:
                exit(0);
            break;
        }
    }while(opcao != '3');
}
#endif // ex6

#ifdef ex7
struct cadastro
{
    char nome[15];
    char endereco[30];
    char cidade[15];
    char estado[3];
    char cep[9];
};

// Funcao para insercao dos dados cadastrais do usuario.
inserirDados(struct cadastro *p_A[])
{
    for(int i = 0; i < 4; i++)
    {
        fflush(stdin);
        printf("\n\n Cliente [%d]\n\n", i+1);
        printf("\n Nome: ");
        gets(p_A[i] -> nome);

        printf("\n Endereco: ");
        gets(p_A[i] -> endereco);

        printf("\n Cidade: ");
        gets(p_A[i] -> cidade);

        printf("\n Estado: ");
        gets(p_A[i] -> estado);

        printf("\n CEP: ");
        gets(p_A[i] -> cep);
    }
}

// Funcao para impressao na tela dos dados cadastrados pelo usuario.
imprimirDados(struct cadastro *p_A[])
{
    for(int i = 0; i < 4; i++)
    {
        printf("\n\n Cliente [%d]\n\n", i+1);
        printf("\n Nome: %s\n", p_A[i] -> nome);
        printf("\n Endereco: %s\n", p_A[i] -> endereco);
        printf("\n Cidade: %s\n", p_A[i] -> cidade);
        printf("\n Estado: %s\n", p_A[i] -> estado);
        printf("\n CEP: %s\n", p_A[i] -> cep);
    }
}

main()
{
    static struct cadastro indiv[4];
    struct cadastro *p_indiv[4];
    int opcao;

    for(int i = 0; i < 4; i++)
    {
        p_indiv[i] = &indiv[i]; /*O ponteiro 'p_indiv[i]' aponta p/ o end. variavel 'indiv[i]'*/
    }

    // Exibe o menu com as opcoes para a escolha do usuario.
	printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");

	// Laco que permite que o programa execute ate que a opcao 3 seja escolhida (encerramento).
    do
    {
        // Laco para a escolha da opcao desejada.
        do
        {
            printf("\n Desejo a opcao: ");
            scanf("%d", &opcao);
        }while(opcao < 0 && opcao > 4);

        switch(opcao)
        {
            case 1:
                system("cls");
                printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");
                printf("\n<======== Secao de Cadastro ========>\n");
                inserirDados(p_indiv); // Chamada da funcao 'inserirDados()'.
                printf("\n");
            break;

            case 2:
                system("cls");
                printf("<======== Opcoes (escolha uma abaixo:) ========>\n\n 1 - Cadastro\n 2 - Mostrar dados cadastrados\n 3 - Finalizar o programa\n");
                printf("\n<======== Secao de Dados Cadastrados ========>\n");
                imprimirDados(p_indiv); // Chamada da funcao 'imprimirDados()'.
                printf("\n");
            break;

            case 3:
                exit(0);
            break;
        }
    }while(opcao != '3');
}
#endif // ex7

#ifdef ex8
struct cadastro{
    char nome[15];
    char endereco[30];
    char cidade[15];
    char estado[4];
    char cep[9];
};

main(){

    static struct cadastro pessoa[4];
    struct cadastro *p_i[4];
    int i, opcao;

    for(i = 0; i < 4; i++){
        p_i[i] = &pessoa[i];
    }
 	
	printf("\n MENU\n[1] - Entrada de Dados\n[2] - Imprimir Dados\n[3] - Limpar Tela\n[4] - Verificar Registros Livres\n[9] - Sair\n");
	
	// Laco responsavel por rodar o programa ate que o usuario decida encerra-lo.
    do{
    	// Laco responsavel por limitar as opcoes que poderao ser escolhidas.
        do{
	        printf("\nDigite uma opcao: ");
	        scanf("%d", &opcao);
        }while(opcao < 0 && opcao > 5);

        switch(opcao){
            case 1:
                entrarDados(p_i); /* Chamada da funcao 'entrarDados()'*/
            break;

            case 2:
                imprimirDados(p_i); /* Chamada da funcao 'imprimirDados()'*/
            break;

            case 3:
                system("cls");
                printf("MENU\n[1] - Entrada de Dados\n[2] - Imprimir Dados\n[3] - Limpar Tela\n[4] - Verificar Registros Livres\n[9] - Sair\n");
            break;
            
            case 4:
                espacoLivre(p_i); /* Chamada da funcao 'espacoLivre()'*/
            break;

            case 9:
                exit(0);
            break;
        }
    }while(opcao != '4');
}

// Funcao responsavel pela entrada de dados pelo usuario
entrarDados(struct cadastro *p_i[])
{
	fflush(stdin);
	int i;
		
	for(i = 0; i < 4; i++)
	{
		if(p_i[i]->nome[0] == '\0')
		{
			printf("\nNome: ");	        gets(p_i[i]->nome);
	        printf("Endereco: ");       gets(p_i[i]->endereco);
	        printf("Cidade: ");	        gets(p_i[i]->cidade);
	        printf("Estado: ");	        gets(p_i[i]->estado);
	        printf("CEP: ");	        gets(p_i[i]->cep);
	        break;
	        }else{
	        		continue;
				 }
	}
	
	if(i >= 3)
	{
		printf("\n Não restam mais registros livres.\n");
	}else{
			printf("\n Ainda restam %d registros livres.\n", 4-(i+1));
		 }
}

// Funcao responsavel por imprimir os dados na tela.
imprimirDados(struct cadastro *p_i[])
{
    int i;

    for(i = 0; p_i[i]->nome[0] != '\0' && i < 4; i++)
    {
        printf("\n Nome: %s\n", p_i[i]->nome);
        printf("\n Endereco: %s\n", p_i[i]->endereco);
        printf("\n Cidade: %s\n", p_i[i]->cidade);
        printf("\n Estado: %s\n", p_i[i]->estado);
        printf("\n CEP: %s\n", p_i[i]->cep);
    }
    
}

// Funcao que define se um espaco esta livre ou nao.
espacoLivre(struct cadastro *p_i[])
{
	fflush(stdin);		
	int i, cont = 0;
		
	for(i = 0; i < 4; i++)
	{
		if(p_i[i]->nome[0] == '\0')
		{
			cont++;
		}
	}
	
	if(cont == 4)
	{
		printf("\nNão restam mais registros livres.\n");
	}else
		{
			printf("\nAinda restam %d registros livres.\n", cont);
		}
}
#endif // ex8
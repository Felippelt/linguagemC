#include <stdio.h>
#define ex1

#ifdef ex1
main()
{
    static char ch[10];
    char aux;
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        // Laco responsavel por limitar em 10 letras digitadas pelo usuario.
        printf("\n Insira letras minusculas para converte-las em maiusculas.\n");
        for(cont = 0; cont < 10; cont++)
        {
            // Laco para verificar se as letras digitadas sao minusculas (protecao).
            do
            {
                printf("\n Digite a %da letra: ", cont+1);
                scanf("%s", &ch[cont]);

                // Caso a letra nao corresponda às minusculas fica preso no laco e exibe mensagem de erro.
                if(ch[cont] < 97 || ch[cont] > 122)
                {
                    printf("\n\n Tecla invalida. Digite uma letra minuscula.\n");
                }
            }while(ch[cont] < 97 || ch[cont] > 122);
        }

        // Laco responsavel pela conversao min. -> maiusc.
        printf("\n\n\n Resultado da conversao minusc. -> maiusc.: \n");
        for(cont = 0; cont < 10; cont++)
        {
            aux = ch[cont] - 32;
            printf("\n A letra '%c' digitada e' correspondente - %c", ch[cont], aux);
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
#endif // ex1

#ifdef ex2
main()
{
    static char ch[10];
    char aux;
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        // Laco responsavel por limitar em 10 letras digitadas pelo usuario.
        printf("\n Insira letras maiusculas para converte-las em minusculas.\n");
        for(cont = 0; cont < 10; cont++)
        {
            // Laco para verificar se as letras digitadas sao maiusculas (protecao).
            do
            {
                printf("\n Digite a %da letra: ", cont+1);
                scanf("%s", &ch[cont]);

                // Caso a letra nao corresponda às maiusculas fica preso no laco e exibe mensagem de erro.
                if(ch[cont] < 65 || ch[cont] > 90)
                {
                    printf("\n\n Tecla invalida. Digite uma letra maiuscula.\n");
                }
            }while(ch[cont] < 65 || ch[cont] > 90);
        }

        // Laco responsavel pela conversao maiusc. -> min.
        printf("\n\n\n Resultado da conversao maiusc. -> min.: \n");
        for(cont = 0; cont < 10; cont++)
        {
            aux = ch[cont] + 32;
            printf("\n A letra '%c' digitada e' correspondente - %c", ch[cont], aux);
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
#endif // ex2

#ifdef ex3
main()
{
    static char texto[10];
    int cont, opcao;

    for(cont = 0; ; cont++)
    {
        // O usuario insere a palavra que deseja (ate 10 dig.).
        printf("\n Digite uma palavra de ate 10 digitos: ");
        scanf("%s", texto);

        // Realiza a inversao da palavra digitada pelo usuario.
        for(cont = 9; cont >= 0; cont--)
        {
            printf("%c", texto[cont]);
        }

        // Reseta os valores do vetor para default.
        for(cont = 0; cont < 10; cont++)
        {
            texto[cont] = 0;
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
    static char string_A[10];
    static char string_B[10];
    int cont, opcao, cont_i, cont_c_A, cont_c_B;

    for(cont = 0; ; cont++)
    {
        cont_i = 0;
        do
        {
        	cont_c_A = 0;
        	cont_c_B = 0;

        	printf("\n Digite uma palavra de ate 10 digitos A: ");
	        scanf("%s", string_A);

        	for(cont = 0; string_A[cont]; cont++)
        	{
        		cont_c_A++;
			}

			printf("\n Digite uma palavra de ate 10 digitos B: ");
	        scanf("%s", string_B);

			for(cont = 0; string_B[cont]; cont++)
        	{
        		cont_c_B++;
			}
		}while(cont_c_A > 10 || cont_c_B > 10);

        // Realiza a comparacao entre os conteudos das strings.
         for(cont = 0; cont < 10; cont++)
         {
             if(string_A[cont] == string_B[cont])
             {
                 cont_i++;
             }
         }

         // Exibe a mensagem correspondente 'igual' ou 'diferente'.
         if(cont_i == 10)
         {
             printf("\n Sao iguais.");
         }else
            {
                printf("\n Sao diferentes.");
            }

        // Reseta os valores das strings.
        for(cont = 0; cont < 10; cont++)
        {
            string_A[cont] = 0;
            string_B[cont] = 0;
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
#endif // ex4

#ifdef ex5
main()
{
    static char string[10];
    int cont, cont_c, opcao;

    for(cont = 0; ; cont++)
    {
        printf("\n Digite uma string: ");
        scanf("%s", string);

        cont_c = 0;
        // Realiza a contagem do tamanho da string digitada pelo usuario.
        for(cont = 0; cont < 10; cont++)
        {
            if(string[cont] != 0)
            {
                cont_c++;
            }
        }

        printf("\n O tamanho da string digitada e': %d", cont_c);

        // Reseta os valores da string.
        for(cont = 0; cont < 10; cont++)
        {
            string[cont] = 0;
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
#endif // ex5

#ifdef ex6
main()
{
	static char carac[5][8];
    int ln, cl, cont_c, opcao;

	for(int cont = 0; ; cont++)
	{
		// Gera a qtd. de linhas.
	    for(ln = 0; ln < 5; ln++)
		{
	        do
			{
	        cont_c = 0;

	        // Usuario digita os 5 nomes para mostrar na tela.
	        printf("\n Digite o %d nome: ",ln+1);
	        scanf("%s",carac[ln]);

	        	// Gera a qtd. de colunas e conta os caracteres.
	            for(cl = 0; carac[ln][cl]; cl++)
				{
	                cont_c++;
	            }

	            // Protecao do programa para nomes > 7 ou < 3 caracteres.
	            if(cont_c > 7 || cont_c < 3)
				{
	                printf("\n Valor invalido. Digite um nome entre 3 e 7 caracteres.\n");
	            }
	        }while(cont_c > 7 || cont_c < 3);
	    }

		printf("\n        10        20        30        40        50\n");
	    printf("12345678901234567890123456789012345678901234567890\n");
	    printf("  %-8s                                %-8s\n", carac[0], carac[4]);
	    printf("            %-8s            %-8s\n", carac[1], carac[3]);
	    printf("                      %-8s\n", carac[2]);

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
main()
{
    char A[3][11];
    int ln, cl, cont_c, opcao;

    for(int cont = 0; ; cont++)
    {
        // Gera a qtd. de linhas.
        for(ln = 0; ln < 3; ln++)
        {
            do
            {
            cont_c = 0;

            // O usuario entra com as strings desejada (ate 10 carac.).
            printf("\n Digite a %da string: ",  ln+1);
            scanf("%s", A[ln]);

                // Gera a qtd. de colunas e realiza a contagem dos carac. digitados.
                for(cl = 0; A[ln][cl]; cl++)
                {
                    cont_c++;
                }

                // Protecao quando a qtd. de caracteres for > 10.
                if(cont_c > 10)
                {
                    printf("\n Valor invalido. Digite uma string <= 10 caracteres.\n");
                }
            }while(cont_c > 10);
        }

        printf("\n        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("    %-11s         %-11s         %-11s\n", A[0], A[1], A[2]);

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
main()
{
	int dia_sem, opcao, cont;
	char ch[3];

    for(cont = 0; ; cont++)
	{
	    printf("\n Insira uma abreviacao de um dia da semana (seg, ter, qua,...).\n");
		printf("\n Insira o dia desejado: ");
		scanf("%s", ch);

		// Le e compara a string digitada com o dia correspondente(Seja maiusc. ou minusc.).

		if((ch[0] == 's' && ch[1] == 'e' && ch[2] == 'g') || (ch[0] == 'S' && ch[1] == 'E' && ch[2] == 'G'))
        {
            dia_sem = 1;
        }else
            if((ch[0] == 't' && ch[1] == 'e' && ch[2] == 'r') || (ch[0] == 'T' && ch[1] == 'E' && ch[2] == 'R'))
            {
                dia_sem = 2;
            }else
                if((ch[0] == 'q' && ch[1] == 'u' && ch[2] == 'a') || (ch[0] == 'Q' && ch[1] == 'U' && ch[2] == 'A'))
                {
                    dia_sem = 3;
                }else
                    if((ch[0] == 'q' && ch[1] == 'u' && ch[2] == 'i') || (ch[0] == 'Q' && ch[1] == 'U' && ch[2] == 'I'))
                    {
                        dia_sem = 4;
                    }else
                        if((ch[0] == 's' && ch[1] == 'e' && ch[2] == 'x') || (ch[0] == 'S' && ch[1] == 'E' && ch[2] == 'X'))
                        {
                            dia_sem = 5;
                        }else
                            if((ch[0] == 's' && ch[1] == 'a' && ch[2] == 'b') || (ch[0] == 'S' && ch[1] == 'A' && ch[2] == 'B'))
                            {
                                dia_sem = 6;
                            }else
                                if((ch[0] == 'd' && ch[1] == 'o' && ch[2] == 'm') || (ch[0] == 'D' && ch[1] == 'O' && ch[2] == 'M'))
                                {
                                    dia_sem = 7;
                                }

        // Exibe o dia referente ao que foi digitado pelo usuario.
		switch (dia_sem)
		{
		    // Caso dia_sem = 1.
			case 1:
                printf("\n Segunda-Feira.");
            break;

            // Caso dia_sem = 2.
			case 2:
                printf("\n Terca-Feira.");
            break;

            // Caso dia_sem = 3.
			case 3:
                printf("\n Quarta-Feira.");
            break;

             // Caso dia_sem = 4.
			case 4:
                printf("\n Quinta-Feira.");
            break;

             // Caso dia_sem = 5.
			case 5:
                printf("\n Sexta-Feira.");
            break;

            // Caso dia_sem = 6.
			case 6:
                printf("\n Sabado.");
            break;

            // Caso dia_sem = 7.
			case 7:
				printf("\n Domingo.");
            break;

            // Serve para mostrar um valor padrao quando nenhum dos blocos (switch-case) for satisfeito.
			default:
				printf("\n O valor inserido e' invalido. Tente novamente.\n");
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


#endif // ex8

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.

2 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.

3 - Receba uma palavra via teclado e imprima-a de tras-para-frente.

4 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são GUAIS ou DIFERENTES.

5 - Escreva um programa que calcula o comprimento de uma string recebida via
    teclado.

6 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3

7 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3

8 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg,
    ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
    segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
    domingo. Utilize o comando switch - case.

*/


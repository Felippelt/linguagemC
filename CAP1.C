#include <stdio.h>
#define ex1

#ifdef ex1

    char c_      = 127;
    int i_       = 32767;
    short sht_   = 32767;
    long lg_     = 2147483647;
    float f_     = 3.4E+38;
    double doub_ = 1.7E+308;

    unsigned char  uc_ = 255;
    unsigned int   ui_ = 65535;
    unsigned short us_ = 65535;
    unsigned long  ul_ = 4294967295;

main()
{
    char c      = -128;
    int i       = -32768;
    short sht   = -32768;
    long lg     = -2147483648;
    float f     = -3.4E-38;
    double doub = -1.7E-307;

    printf("\nOs valores das variaveis globais sao: \n\n char c_ = %d\n int i_ = %i\n short sht_ = %hd\n long lg_ = %ld\n float f_ = %g\n double doub_ = %g\n unsigned char uc_ = %u\n unsigned int ui_ = %u\n unsigned short us_ = %hu\n unsigned long ul_ = %lu", c_, i_, sht_, lg_, f_, doub_, uc_, ui_, us_, ul_);
    printf("\n\n\nOs valores das variaveis locais sao: \n\n char c = %d\n int i = %i\n short sht = %hd\n long lg = %ld\n float f = %g\n double doub = %g\n", c, i, sht, lg, f, doub);

}
#endif // ex1

#ifdef ex2
main()
{
    char c;
    short s;
    long l;
    int i;
    float f;
    double doub;

    printf("\n Digite um valor para variavel short s = ");
    scanf("%hd", &s);
    printf("\n Digite um valor para variavel long l = ");
    scanf("%ld", &l);
    printf("\n Digite um valor para variavel int i = ");
    scanf("%d", &i);
    printf("\n Digite um valor para variavel float f = ");
    scanf("%f", &f);
    printf("\n Digite um valor para variavel double doub = ");
    scanf("%lf", &doub);
    printf("\n Digite um valor para variavel char c = ");
    scanf("%d", &c);


    printf("\n\n        10        20        30        40        50        60");
    printf("\n12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    %-6d\t        %-11d\t    %-6d", s, l, i);
    printf("\n\t      %-8g\t          %-9g           %-4d\n", f, doub, c);
}
#endif // ex2

#ifdef ex3
main()
    {
    char c;
    short s;
    long l;
    int i;
    float f;
    double doub;

    unsigned char uc;
    unsigned int ui;
    unsigned long ul;

    printf("\n Digite um valor para variavel short s = ");
    scanf("%hd", &s);
    printf("\n Digite um valor para variavel long l = ");
    scanf("%ld", &l);
    printf("\n Digite um valor para variavel int i = ");
    scanf("%d", &i);
    printf("\n Digite um valor para variavel float f = ");
    scanf("%f", &f);
    printf("\n Digite um valor para variavel double doub = ");
    scanf("%lf", &doub);
    printf("\n Digite um valor para variavel char c = ");
    scanf("%d", &c);
    printf("\n Digite um valor para variavel unsigned char uc = ");
    scanf("%u", &uc);
    printf("\n Digite um valor para variavel unsigned int ui = ");
    scanf("%u", &ui);
    printf("\n Digite um valor para variavel unsigned long ul = ");
    scanf("%lu", &ul);

    printf("\n\n        10        20        30        40        50        60");
    printf("\n12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    %-6d\t        %-11d\t    %-6d", s, l, i);
    printf("\n\t      %-8g\t          %-9g           %-4d\n", f, doub, c);
    printf("\n\t %-3u\t\t     %-5u\t\t %-10lu", uc, ui, ul);
}
#endif // ex3

#ifdef ex4
main()
{
    int c = 5;
    int d = 9;

    printf("\n valor c antes = %d", c);
    printf("\n valor d antes = %d\n", d);
    c ^= d;
    d ^= c;
    c ^= d;

    printf("\n valor c depois = %d", c);
    printf("\n valor d depois = %d\n", d);

    /*   *** uso do XOR ***
        0 0 -> 0    c c -> 0
        0 1 -> 1    c d -> 1
        1 0 -> 1    d c -> 1
        1 1 -> 0    d d -> 0            */
}
#endif // ex4

#ifdef ex5
main()
{
    int numL = 0, multiplo = 0, cont;

    printf("\n Descubra o menor multiplo que sucede o valor minimo a ser inserido.");
    printf("\n Digite um limite minimo: ");
    scanf("%d", &numL);
    printf("\n Digite um multiplo: ");
    scanf("%d", &multiplo);

    for(cont = numL; ;cont++)
    {
        if((cont % multiplo == 0) && (cont > numL))
        {
            break;
        }
    }
    printf("\n\n O menor multiplo de %d depois do valor minimo inserido e': %d\n", multiplo, cont);

}
#endif // ex5

#ifdef ex6
main()
{
    int seg;

    printf(" Digite um valor em segundos: ");
    scanf("%d", &seg);
    printf("\n O valor em horas: %-2d,\n O valor em minutos: %-2d,\n O valor em segundos: %-2d", seg/3600, (seg % 3600)/60, seg % 60);
}
#endif // ex6

#ifdef ex7
main()
{
    int num, d1 = 0, d2 = 0, d3 = 0;

    printf("\n Digite um numero inteiro positivo de 3 digitos: ");
    scanf("%d", &num);

    d1 += num % 10;
    d2 += num / 10 % 10;
    d3 += num / 10 / 10;

    printf("\n O numero invertido e': %d%d%d", d1, d2, d3);
}

#endif // ex7

#ifdef ex8
main()
{
    int x;                  // Quantidade de anos.
    int cont_bissexto = 0;  // Contador do anos bissextos.
    unsigned long seg = 0;

    // Proteção para que o número de anos digitado seja > 0.
    do
    {
        printf("\n Digite a quantidade de anos que deseja viver: ");
        scanf("%d", &x);

        if(x <= 0)
        {
            printf("\n Valor invalido. Digite um valor > 0.");
        }
    }while(x <= 0);

    seg = x * 31557600;     // Quantidade de anos x quantidade de vezes que o coracao bate por ano.

    // Proteção para contagem de anos bissextos.
    if(x >= 4)
    {
        cont_bissexto = x/4;
    }

    cont_bissexto *= 86400;
    seg += cont_bissexto;       // Segundos OU Total de vezes que o coração bateu.

    printf("\n O seu coracao batera' em media %lu vezes em %d anos.\n", seg, x);

}
#endif // ex8

/*****************************************************************************

				EXERCICIOS

	*****************************************************************************

	1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
	    long, unsigned(char, int, short, long), float e double com seus valores
	    limites e imprima-os no video. Utilize variaveis globais para os valores
	    positivos e locais para os negativos.

	2 - Escreva um programa que receba dados via teclado para variaveie do tipo short,
	    long, int, float, double e um char e imprima-os no video no seguinte
	    formato:

	             10        20        30        40        50        60
	     12345678901234567890123456789012345678901234567890123456789012345
	         short               long                int
	                   float               double              char

	3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
	    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.

	4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
	    variável auxiliar.

	5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
	    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
	    teclado.
	    Ex: menor multiplo de 13 maior que 100. Resultado: 104.

	6 - Escreva um programa que receba via teclado um tempo em segundos e converta
	    para horas, minutos e segundos.
	    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

	7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
	    outro número formado pelos dígitos invertidos do número lido.
	    Ex:   NúmeroLido = 123
	        NúmeroGerado = 321

	8 - O coração humano bate em media uma vez por segundo. Escrever um programa para
	     calcular quantas vezes o coracao de uma pessoa baterá se viver X anos.
	     Imprimir o resultado na tela.
	*/


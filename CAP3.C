#include <stdio.h>
#define ex1

#ifdef ex1
main()
{
    int num1, num2;

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite 2 numeros para que seja efetuada as 4 operacoes aritmeticas entre eles.\n");
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &num1);

        do
        {
            printf("\n Digite o segundo numero: ");
            scanf("%d", &num2);

            if(num2 == 0)
            {
                printf("\n Valor invalido. Digite um numero diferente de 0.");
            }
        }while(num2 == 0); // Não permite que dê erro na divisão por 0.

        printf("\n Soma: %d", num1 + num2);
        printf("\n Subtracao: %d", num1 - num2);
        printf("\n Multiplicacao: %d", num1 * num2);
        printf("\n Divisao: %.2f\n", (float)num1 / num2);


        if(num1 < 0 || num2 < 0) // Caso o 1º ou o 2º numero digitado seja negativo sai do laço.
        {
            break;
        }
    }
}
#endif

#ifdef ex2
main()
{
    int num1, num2, aux = 0;
    float divisao = 0;

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite 2 numeros para que seja efetuada as 4 operacoes aritmeticas entre eles.\n");
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &num1);
        aux = num1; // Guarda o valor do primeiro numero digitado na variavel auxiliar.

        do
        {
            printf("\n Digite o segundo numero: ");
            scanf("%d", &num2);

            if(num2 == 0)
            {
                printf("\n Valor invalido. Digite um numero diferente de 0.");
            }
        }while(num2 == 0); // Não permite que dê erro na divisão por 0.

        printf("\n Soma: %d", num1 += num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        printf("\n Subtracao: %d", num1 -= num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        printf("\n Multiplicacao: %d", num1 *= num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        divisao = (float)num1 / num2;
        printf("\n Divisao: %.2f\n", divisao);
        num1 = aux; // Retorna ao valor inicial digitado.

        if(num1 < 0 || num2 < 0) // Caso o 1º ou o 2º numero digitado seja negativo sai do laço.
        {
            break;
        }
    }
}
#endif // ex2

#ifdef ex3
main()
{
    float num1, num2, aux = 0;

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite 2 numeros inteiros para que seja efetuada \n as 4 operacoes aritmeticas entre eles.\n");
        printf("\n Digite o primeiro numero: ");
        scanf("%f", &num1);
        aux = num1; // Guarda o valor do primeiro numero digitado na variavel auxiliar.

        do
        {
            printf("\n Digite o segundo numero: ");
            scanf("%f", &num2);

            if(num2 == 0)
            {
                printf("\n Valor invalido. Digite um numero diferente de 0.");
            }
        }while(num2 == 0); // Não permite que dê erro na divisão por 0.

        printf("\n Soma: %.2f", num1 += num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        printf("\n Subtracao: %.2f", num1 -= num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        printf("\n Multiplicacao: %.2f", num1 *= num2);
        num1 = aux; // Retorna ao valor inicial digitado.
        printf("\n Divisao: %.2f\n", num1 /= num2);
        num1 = aux; // Retorna ao valor inicial digitado.

        if(num1 < 0 && num2 < 0) // Caso o 1º e o 2º numero digitado sejam negativos sai do laço.
        {
            break;
        }
    }
}
#endif // ex3

#ifdef ex4
main()
{
    int num1, num2, opcao = 0;

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("\n Digite o segundo numero: ");
        scanf("%d", &num2);

        printf("\n\n Operacao bit a bit");
        printf("\n (&) - AND: %d", num1 & num2);
        printf("\n (|) - OR: %d", num1 | num2);
        printf("\n (^) - XOR: %d", num1 ^ num2);
        printf("\n O valor do primeiro numero em decimal fica: %d\n E em hexadecimal fica: 0x%x", num1, num1);
        printf("\n\n O valor do segundo numero em decimal fica: %d\n E em hexadecimal fica: 0x%x\n", num2, num2);

        do
        {
            printf("\n\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
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
    int num, opcao = 0;

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite um numero inteiro: ");
        scanf("%d",&num);

        num = num >>3;
        printf("\n Dividindo-se o numero por 8 tem-se = %-6d", num);
        num = num <<3;
        printf("\n Multiplicando-se o numero por 8 tem-se = %-6d", num);

        do
        {
            printf("\n\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
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
    int a, b, opcao = 0;

    printf("\n Digite dois valores A e B que serao comparados.");

    for(int cont = 0; ;cont++)
    {
        printf("\n Digite o valor de A: ");
        scanf("%d", &a);

        printf("\n Digite o valor de B: ");
        scanf("%d", &b);

        if(a >= 120 && b < 240)
        {
           printf("\n Verdadeiro.");
        }
        else
        {
            printf("\n Falso.");
        }
        if(a != 60 || b == 120)
        {

            printf("\n Verdadeiro.");
        }
        else
        {
            printf("\n Falso.");
        }
        if((a*25) == 100 && (b+10) >= 100)
        {
            printf("\n Verdadeiro.");
        }
        else
        {
            printf("\n Falso.");
        }
        if(((a + 300)/5) >= 100 || (b - 200) <= 200)
        {
            printf("\n Verdadeiro.");
        }
        else
        {
        printf("\n Falso.");
        }

        do
        {
            printf("\n\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
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
    int opcao = 0;
    float celsius = 0, kelvin = 0, fahrenheit = 0;

    for(int cont = 0; ;cont++)
    {
        do
        {
            printf("\n 1 - transforma graus Celsius em Fahrenheit e Kelvin\n 2 - transforma graus Fahrenheit em Celsius e Kelvin\n 3 - transforma graus Kelvin em Celsius e Fahrenheit");
            printf("\n\n Digite a opcao desejada: ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 2 && opcao != 3);

        switch(opcao)
        {
            case 1:
                printf("\n Digite a temperatura em graus Celsius: ");
                scanf("%f", &celsius);

                fahrenheit = 1.8 * celsius + 32;
                kelvin = celsius + 273;

                printf("\n O calculo em graus fahrenheit fica: %.2f", fahrenheit);
                printf("\n O calculo em kelvin fica: %.2f\n", kelvin);
            break;

            case 2:
                printf("\n Digite a temperatura em graus Fahrenheit: ");
                scanf("%f", &fahrenheit);

                celsius = (fahrenheit - 32) / 1.8;
                kelvin = celsius + 273;

                printf("\n O calculo em graus celsius fica: %.2f", celsius);
                printf("\n O calculo em kelvin fica: %.2f\n", kelvin);
            break;

            case 3:
                printf("\n Digite a temperatura em graus Kelvin: ");
                scanf("%f", &kelvin);

                celsius = kelvin - 273;
                fahrenheit = 1.8*(kelvin - 273) + 32;

                printf("\n O calculo em graus celsius fica: %.2f", celsius);
                printf("\n O calculo em fahrenheit fica: %.2f\n", fahrenheit);
            break;
        }

        do
        {
            printf("\n\n\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
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

    int data_nasc, mes_nasc, ano_nasc;                               // datas do nascimento.
    int dia_h, mes_h, ano_h;                                         // datas referentes ao dia atual.
    int idade_dia = 0, idade_mes = 0, idade_ano = 0, opcao = 0;      // variaveis referentes à idade.
    int meses, num_dia;                                              // variaveis referentes à numeracao de dias e meses.

    for(int cont = 0; ; cont++)
    {
        idade_dia = 0, idade_mes = 0, idade_ano = 0;
        opcao = 0, meses = 0, num_dia = 0;

        // Protecao do programa para valores < 0.
        do
        {
            // Insercao de valores da data de nasc. do usuario.
            printf("\n Insira os valores solicitados para o calculo da sua idade.");
            printf("\n\n Digite o dia do seu nasc.: ");
            scanf("%d", &data_nasc);

            printf("\n Digite o mes do seu nasc.: ");
            scanf("%d", &mes_nasc);

            printf("\n Digite o ano do seu nasc.: ");
            scanf("%d", &ano_nasc);
        }while(data_nasc <= 0 || mes_nasc <= 0 || ano_nasc <= 0);

        // Protecao do programa para valores < 0.
        do
        {
            // Insercao da data do dia vigente.
            printf("\n\n Digite o dia atual.: ");
            scanf("%d", &dia_h);

            printf("\n Digite o mes atual.: ");
            scanf("%d", &mes_h);

            printf("\n Digite o ano atual.: ");
            scanf("%d", &ano_h);
        }while(dia_h <= 0 || mes_h <= 0 || ano_h <= 0);


        // A cada ano bissexto soma-se 1 dia (menos o dia referente ao nasc. do usuario).
        for (int i = ano_nasc + 1; i <= ano_h; i++)
        {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                idade_dia++;
            }
        }

        //Caso a pessoa tenha nascido antes ou no dia 29/02 de um ano bissexto temos que adicionar um dia a sua idade
        if ((ano_nasc % 4 == 0 && (ano_nasc % 100 != 0 || ano_nasc % 400 == 0))  &&  data_nasc <= 29 && mes_nasc < 3)
        {
            idade_dia++;
        }

        //Se o dia no nascimento entrado for maior que o atual devemos subtrair 1 do mes e adicionar o numero de dias ao dia
        if ((data_nasc + idade_dia) > dia_h)
        {
            meses -= 1;

            if (meses == 1)
            {
                num_dia = 31;
            }

            if (meses == 2)
            {
                num_dia = 28;
            }

            if (meses == 3)
            {
                num_dia = 31;
            }

            if (meses == 4)
            {
                num_dia = 30;
            }

            if (meses == 5)
            {
                num_dia = 31;
            }

            if (meses == 6)
            {
                num_dia = 30;
            }

            if (meses == 7)
            {
                num_dia = 31;
            }

            if (meses == 8)
            {
                num_dia = 31;
            }

            if (meses == 9)
            {
                num_dia = 30;
            }

            if (meses == 10)
            {
                num_dia = 31;
            }

            if (meses == 11)
            {
                num_dia = 30;
            }

            if (meses == 12)
            {
                num_dia = 31;
            }

            dia_h += (num_dia);
            idade_mes -= 1;
        }

        // Se o mes da idade for maior que o mes atual subtrai um do ano e adciona 12 aos meses
        if (mes_nasc > mes_h)
        {
            idade_ano -= 1;
            mes_h += 12;
        }else
            {   // Calcula a idade por: dia, mes e ano.
                idade_dia += dia_h - data_nasc;
                idade_mes += mes_h - mes_nasc;
                idade_ano += ano_h - ano_nasc;
            }

        // Printa na tela a idade calculada do usuario.
        printf("\n\n Caramba! Voce tem a idade exatamente: %d dias, %d meses e %d anos.\n\n", idade_dia, idade_mes, idade_ano);

        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}

#endif // ex8

#ifdef ex9
main()
{
    int dia, mes, ano, nome_dia, opcao = 0;

    for(int cont = 0; ; cont++)
    {
        do
        {
            printf("\n Digite a data do dia: ");
            scanf("%d", &dia);

            if((dia < 1) || (dia > 31))
            {
               printf(" Valor digitado e' invalido. Tente novamente.");
            }
        }while((dia < 1) || (dia > 31));

        do
        {
            printf("\n Digite o mes: ");
            scanf("%d", &mes);

            if((mes < 1) || (mes > 12))
            {
               printf(" Valor digitado e' invalido. Tente novamente.");
            }
        }while((mes < 1) || (mes > 12));

        do
        {
            printf("\n Digite o ano: ");
            scanf("%d", &ano);

            if(ano <= 0)
            {
               printf(" Valor digitado e' invalido. Tente novamente.");
            }
        }while(ano <= 0);


    nome_dia = (nome_dia = dia + mes< 3? ano--: ano-2 , 23*mes/9+dia+mes+4+ano/4-ano/100+ano/400)%7;


    if(nome_dia == 0)
    {
         printf("\n O dia da semana e' --> DOMINGO.\n");
    }
    else
        if(nome_dia == 1)
        {
            printf("\n O dia da semana e' --> SEGUNDA-FEIRA.\n");
        }
    else
        if(nome_dia == 2)
        {
             printf("\n O dia da semana e' --> TERCA-FEIRA.\n");
        }
    else
        if(nome_dia == 3)
        {
             printf("\n O dia da semana e' --> QUARTA-FEIRA.\n");
        }
    else
        if(nome_dia == 4)
        {
             printf("\n O dia da semana e' --> QUINTA-FEIRA.\n");
        }
    else
        if(nome_dia == 5)
        {
             printf("\n O dia da semana e' --> SEXTA-FEIRA.\n");
        }
    else
        if(nome_dia == 6)
        {
             printf("\n O dia da semana e' --> SABADO.\n");
        }

        do
        {
            printf("\n Digite '0' p/ continuar e '1' p/ interromper a execucao do programa.\n ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 0);

        if(opcao == 0)
        {
            printf("\n Continuando...");
        }else
            if(opcao == 1)
            {
                break;
            }
    }
}
#endif // ex9

/*****************************************************************************

			EXERCICIOS

*****************************************************************************

1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
    Faça um loop infinito e defina uma saida.

2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.Faça um loop infinito e defina uma saida.

3 - Reescreva o exercicio anterior utilizando numeros float. Faça um
    loop infinito e defina uma saida.

4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.Faça um loop infinito e defina
    uma saida.

5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.Faça um loop
    infinito e defina uma saida.

6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado. Faça um loop infinito e defina uma
    saida.(se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao
        a >= 120 && b < 240
        a != 60  || b == 120
       (a*25) == 100 && (b+10) >= 100
       ((a + 300)/5) >= 100 || (b - 200) <= 200

7 - Escreva um programa que tenha o menu abaixo. Faça um loop infinito e defina
    uma saida.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit

8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebido via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de              nascimento.Faça um loop infinito e defina uma saida.

9 - Escreva um programa para determinar o dia da semana de uma determinada
     data (dia, mes e ano).Faça um loop infinito e defina uma saida.

*/

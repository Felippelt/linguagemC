#include <stdio.h>
#define ex1

#ifdef ex1
main()
{
    int num, cont = 0;
    float soma = 0;

    printf("\n Digite um numero inteiro positivo para calcular a media.\n Caso queira interromper o programa digite um valor < 0.\n");

    do
    {
        printf("\n Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if(num >= 0)
        {
            cont++;
            soma += num;
        }
    }while(num >= 0);

    if(cont > 0)
    {
        printf("\n A media dos valores digitados e': %.2f\n", soma/cont);
    }
    else
    {
        printf("\n A media dos valores digitados e': 0\n");
    }
}

#endif

#ifdef ex2
main()
{
    float x, y;
    char opcao;

    x = 50;
    y = x / 2;

    printf("\n Pense em um numero entre 0 e 99.");
    printf("\n Tecle '>' se o numero que voce esta pensando for maior, \n '<' p/ menor e '=' p/ igual ao numero pensado.\n");

    do
    {
        printf("\nO seu numero e' >, < ou = %.0f? ", x);
        opcao = getche();

        if(opcao == '>' && x < 99)
        {
            x += y;
            y /= 2;
        }
        else
            if(opcao == '<' && x >= 0)
            {
                x -= y;
                y /= 2;
            }
    }while(opcao != '=');
    printf("\n\n O numero que voce pensou foi: %.0f\n", x);
}

#endif // ex2

#ifdef ex3
main()
{
    float x, y;
    int cont_tentativas = 1;
    char opcao;

    x = 50;
    y = x / 2;

    printf("\n Pense em um numero entre 0 e 99.");
    printf("\n Tecle '>' se o numero que voce esta pensando for maior, \n '<' p/ menor e '=' p/ igual ao numero pensado.\n");

    do
    {
        printf("\nO seu numero e' >, < ou = %.0f? ", x);
        opcao = getche();

        switch(opcao)
        {
            case '>':

                if(x < 99)
                {
                    x += y;
                    y /= 2;
                    cont_tentativas++;
                }
            break;

            case '<':

                if(x >= 0)
                {
                    x -= y;
                    y /= 2;
                    cont_tentativas++;
                }

            break;
        }
    }while(opcao != '=');
    printf("\n\n O numero que voce pensou foi: %.0f\n O numero de tentativas foi: %d\n", x, cont_tentativas);
}
#endif // ex3

#ifdef ex4
main()
{
    int seg, min, horas, soma_ant = 0, soma_post = 0;

    printf("\n Insira os valores solicitados para calcular a duracao da chamada.");
    do
    {
        printf("\n\n\n Digite o horario do inicio da chamada.");
        printf("\n\n Digite a hora: ");
        scanf("%d", &horas);
        printf("\n Digite os minutos: ");
        scanf("%d", &min);
        printf("\n Digite as segundos: ");
        scanf("%d", &seg);

    }while((horas > 24 || horas <= 0) || (min > 59 || min < 0) || (seg > 59 || seg < 0));

    horas *= 3600;
    min *= 60;
    soma_ant = horas + min + seg;

    while(soma_post < soma_ant)
    {
        do
        {
            printf("\n\n\n Digite o horario da finalizacao da chamada.");
            printf("\n\n Digite a hora: ");
            scanf("%d", &horas);
            printf("\n Digite os minutos: ");
            scanf("%d", &min);
            printf("\n Digite as segundos: ");
            scanf("%d", &seg);

        }while((horas > 24 || horas <= 0) || (min > 59 || min < 0) || (seg > 59 || seg < 0));

        horas *= 3600;
        min *= 60;
        soma_post = horas + min + seg;
    }

    soma_post -= soma_ant;
    printf("\n A duracao da chamada foi: %2dhr %2dmin %2dseg.\n", soma_post/3600, (soma_post % 3600)/60, soma_post % 60);
}
#endif // ex4

#ifdef ex5
main()
{
    float num_int = 0;      // num_int -> numero completo (parte inteira e resto decimal).
    float num_float = 0;    // num_float -> parte ponto flutuante do numero.

    do
    {
        printf("\n Digite um numero de ponto flutuante: ");
        scanf("%f", &num_float);

        if(num_float <= 0)
        {
            printf("\n Valor invalido. Digite um valor maior que zero. \n");
        }
    }while(num_float <= 0);

    num_int += num_float;
    num_float -= (int)num_float;

    if(num_float < 0.25)
    {
        num_int -= num_float;
    }
    else
        if((num_float >= 0.25) && (num_float < 0.75))
        {
            num_int -= num_float;
            num_int += 0.50;
        }
        else
            if(num_float >= 0.75)
            {
                num_int -= num_float;
                num_int++;
            }

    printf("\n O valor arredondado fica: %.2f\n", num_int);
}
#endif // ex5

#ifdef ex6
main()
{
    float litros, preco_final = 0;
    char caract;

    do
    {
        printf("\n Digite para 'A' - Alcool e para 'G' - Gasolina: ");
        caract = getchar();
        getchar();

        if((caract != 'g') && (caract != 'G') && (caract != 'a') && (caract != 'A'))
        {
            printf("\n Valor invalido. Tente novamente. \n");
        }
    }while((caract != 'g') && (caract != 'G') && (caract != 'a') && (caract != 'A'));

    do
    {
        printf("\n Digite a quantidade de litros de combustivel: ");
        scanf("%f", &litros);

        if(litros <= 0)
        {
            printf("\n Valor invalido. Tente novamente. \n");
        }
    }while(litros <= 0);

    switch(caract)
    {
        case 'g':
        case 'G':

            if(litros < 21)
            {
                preco_final = preco_final + litros * 0.96 * 3.88;
            }
            else
            {
                preco_final = preco_final + litros * 0.94 * 3.88;
            }
        break;
        case 'a':
        case 'A':

            if(litros < 21)
            {
                preco_final = preco_final + litros * 0.97 * 3.18;
            }
            else
            {
                preco_final = preco_final + litros * 0.95 * 3.18;
            }
        break;
    }
    printf("\n Valor a pagar: R$ %.2f\n", preco_final);
}
#endif // ex6

#ifdef ex7
main()
{
    float result = 0, km, litros;

    do
    {
        printf("\n Digite a distancia em km percorrida: ");
        scanf("%f", &km);

        if(km <= 0)
        {
            printf("\n O valor digitado e' invalido. Tente novamente.");
        }
    }while(km <= 0);

    do
    {
        printf("\n Digite a qtd. de litros gasto na distancia percorrida: ");
        scanf("%f", &litros);

        if(km <= 0)
        {
            printf("\n O valor digitado e' invalido. Tente novamente.");
        }
    }while(litros <= 0);

    result = km / litros;

    if(result < 8)
    {
        printf("\n Venda o carro!\n");
    }
    else
        if((result >= 8) && (result <= 14))
        {
            printf("\n Economico!\n");
        }
        else
            if(result > 14)
            {
                printf("\n Super economico!\n");
            }
}
#endif // ex7

#ifdef ex8
main()
{
    float altura;
    char sexo;

    do
    {
        printf("\n Digite sua altura: ");
        scanf("%f", &altura);

        if(altura <= 0)
        {
            printf("\n O valor digitado e' invalido. Tente novamente.");
        }
    }while(altura <= 0);

    do
    {
        printf("\n Digite 'm' p/ masculino e 'f' p/ feminino: ");
        sexo = getche();

        if((sexo != 'm') && (sexo != 'M') && (sexo != 'f') && (sexo != 'F'))
        {
            printf("\n O valor digitado e' invalido. Tente novamente.");
        }
    }while((sexo != 'm') && (sexo != 'M') && (sexo != 'f') && (sexo != 'F'));

    switch(sexo)
    {
        case 'm':
        case 'M':
            printf("\n O seu peso ideal e': %.2f \n", (72.7 * altura) - 58);
        break;

        case 'f':
        case 'F':
            printf("\n O seu peso ideal e': %.2f \n", (62.1 * altura) - 44.7);
        break;
    }
}
#endif // ex8

/*****************************************************************************

			EXERCICIOS

******************************************************************************


1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.

2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.

3 - Reescreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.

4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída e
    é executado um programa que determina o intervalo de tempo decorrido entre
    aqueles dois instantes dados. Escreva um programa que recebe dois instantes
    dados em horas, minutos e segundo e determina o intervalo de tempo (em
    horas, minutos e segundos) decorrido entre eles.

5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior

6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.

7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!

8 - Faca um programa que receba a altura e o sexo de uma pessoa, calcule e
    mostre seu peso ideal, utilizando as seguintes formulas (onde h corresponde
    a altura):
    Homens: (72.7 * h) - 58
    Mulheres: (62,1 * h) - 44,7

*/

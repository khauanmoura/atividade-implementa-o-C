#include <stdio.h>

int c, ano;
int calculaAno(anoInicial, anoFinal)
{
    printf("coloque o primero ano d.C \n");
    scanf("%d", &anoInicial);

    printf("coloque o segundo ano d.C: \n");
    scanf("%d", &anoFinal);

    for (c = anoInicial; c <= anoFinal; c++)
    {
        if (((c % 4 == 0) && (c % 100 != 0)) || (c % 400 == 0))
        {
            ano++;
        }
        else
        {
            ano = ano;
        }
    }
    printf("Tiveram %d anos anos bissextos.", ano);
    return 0;
}

int main(void)
{
    calculaAno();

    return 0;
}
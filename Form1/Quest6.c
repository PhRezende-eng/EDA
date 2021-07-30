#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int Colunas, Linhas, Movimentos, DirecaoA, DirecaoB;
    int indexP = 0, ProfessorAx = 0, ProfessorAy = 0, ProfessorBx = 0, ProfessorBy = 0, isadf = 0;

    scanf("%d", &Colunas);
    scanf("%d", &Linhas);
    scanf("%d", &Movimentos);

    ProfessorAx = 1;
    ProfessorAy = 1;

    ProfessorBx = Colunas;
    ProfessorBy = Linhas;

    while (indexP < Movimentos)
    {
        scanf("%d", &DirecaoA);
        scanf("%d", &DirecaoB);

        switch (DirecaoA)
        {
        case 1:
            ProfessorAy++;
            break;

        case 2:
            ProfessorAy--;
            break;

        case 3:
            ProfessorAx++;
            break;

        case 4:
            ProfessorAx--;
            break;

        default:
            break;
        }
        switch (DirecaoB)
        {
        case 1:
            ProfessorBy++;
            break;

        case 2:
            ProfessorBy--;
            break;

        case 3:
            ProfessorBx++;
            break;

        case 4:
            ProfessorBx--;
            break;

        default:
            break;
        }

        if (ProfessorAx == ProfessorBx && ProfessorAy == ProfessorBy)
        {
            isadf = 1;
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", ProfessorBx, ProfessorAy, indexP + 1);
            break;
        }
        else if ((ProfessorAx > Colunas || ProfessorAx < 1) || (ProfessorAy > Linhas || ProfessorAy < 1))
        {
            isadf = 1;

            printf("PA saiu na posicao (%d,%d) no passo %d\n", ProfessorAx, ProfessorAy, indexP + 1);
            break;
        }
        else if ((ProfessorBx > Colunas || ProfessorBx < 1) || (ProfessorBy > Linhas || ProfessorBy < 1))
        {
            isadf = 1;

            printf("PB saiu na posicao (%d,%d) no passo %d\n", ProfessorBx, ProfessorBy, indexP + 1);
            break;
        }

        indexP++;
    }
    if (isadf == 0)
    {
        printf("Nao se encontraram\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int Colunas, Linhas, Movimentos, ProfessorA, ProfessorB, DirecaoA, DirecaoB;
    int indexC, indexL, indexP, Norte, Sul, Leste, Oeste = 0;

    scanf("%d", &Colunas);
    scanf("%d", &Linhas);
    scanf("%d", &Movimentos);

    while (indexP < Movimentos)
    {
        scanf("%d", &DirecaoA);
        scanf("%d", &DirecaoB);
        switch (DirecaoA)
        {
        case 1:
            Norte++;

        case 2:
            Sul++;

        case 3:
            Leste++;

        case 4:
            Oeste++;

        default:
            break;
        }

        switch (DirecaoB)
        {
        case 1:
            Norte++;

        case 2:
            Sul++;

        case 3:
            Leste++;

        case 4:
            Oeste++;

        default:
            break;
        }

        indexP++;
    }

    printf("%d %d %d %d", Norte, Sul, Leste, Oeste);

    // while (indexP < Movimentos)
    // {
    //     while (indexC < Colunas)
    //     {
    //         while (indexL <= Linhas)
    //         {
    //             if (Linhas == indexL)
    //             {
    //                 printf("\n");
    //                 break;
    //             }
    //             else
    //             {
    //                 printf("[%.3d,%.3d]", indexC, indexL); // adiciona 0 à esquerda
    //                 indexL++;
    //             }
    //         }
    //         indexL = 0;
    //         indexC++;
    //     }
    //     indexP;
    // }

    return 0;
}

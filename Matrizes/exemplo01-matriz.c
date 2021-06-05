#include <stdio.h>
#include <stdlib.h>

void main()
{
    int aluno[3][5] =
        {
            {10, 30, 45, 70, 36}, //linha 0
            {86, 44, 63, 82, 80}, //linha 1
            {70, 61, 52, 63, 74}  //linha 2
        };
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Aluno[%d][%d]: %d\n", i, j, aluno[i][j]);
        }
    }
    system("pause");
}

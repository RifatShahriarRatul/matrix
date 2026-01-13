#include<stdio.h>
int main()
{
    int i, j, S;
    int m_1[2];
    printf("Enter the order of the first matrix: \n");
    printf("Row: ");
    scanf("%d", &m_1[0]);
    printf("Column: ");
    scanf("%d", &m_1[1]);
    int matA[m_1[0]][m_1[1]];
    printf("Enter Matrix A:\n");
    for(i=0; i<m_1[0]; i++)
    {
        for(j=0; j<m_1[1]; j++)
        {
            printf("Enter element [%d , %d]: ", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter the scalar number: \n");
    scanf("%d", &S);
    printf("\n Matrix A:\n");
    printf("\n");
    for(i=0; i<m_1[0]; i++)
    {
        printf("| ");
        for(j=0; j<m_1[1]; j++)
        {
            printf(" %d  ", matA[i][j]);
        }
        printf(" |\n");
    }

    printf("\n Matrix C {S * Matrix A}:\n");
    printf("\n");
    for(i=0; i<m_1[0]; i++)
    {
        printf("| ");
        for(j=0; j<m_1[1]; j++)
        {
            printf(" %d  ", matA[i][j]*S);
        }
        printf(" |\n");
    }
}

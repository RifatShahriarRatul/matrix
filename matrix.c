#include<stdio.h>
int main()
{
    int i, j, m, n, o, p;
    int m_1[2], m_2[2];
    printf("Enter the order of the first matrix: \n");
    printf("Row: ");
    scanf("%d", &m_1[0]);
    printf("Column: ");
    scanf("%d", &m_1[1]);
    printf("Enter the order of the second matrix: \n");
    printf("Row: ");
    scanf("%d", &m_2[0]);
    printf("Column: ");
    scanf("%d", &m_2[1]);
    int matA[m_1[0]][m_1[1]], matB[m_2[0]][m_2[1]];
    printf("Enter Matrix A:\n");
    for(i=0; i<m_1[0]; i++)
    {
        for(j=0; j<m_1[1]; j++)
        {
            printf("Enter element [%d , %d]: ", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter Matrix B:\n");
    for(i=0; i<m_2[0]; i++)
    {
        for(j=0; j<m_2[1]; j++)
        {
            printf("Enter element [%d , %d]: ", i+1, j+1);
            scanf("%d", &matB[i][j]);
        }
    }
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
    printf("\n Matrix B:\n");
    printf("\n");
    for(i=0; i<m_2[0]; i++)
    {
        printf("| ");
        for(j=0; j<m_2[1]; j++)
        {
            printf(" %d  ", matB[i][j]);
        }
        printf(" |\n");
    }
    printf("\n Matrix C {Matrix A + Matrix B}:\n");
    printf("\n");
    for(i=0; i<m_2[0]; i++)
    {
        printf("| ");
        for(j=0; j<m_2[1]; j++)
        {
            printf(" %d  ", matA[i][j]+matB[i][j]);
        }
        printf(" |\n");
    }
}

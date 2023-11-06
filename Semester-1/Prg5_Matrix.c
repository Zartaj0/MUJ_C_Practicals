#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], transpose[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate the transpose while printing
    printf("Transpose Matrix:\n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            transpose[j][i] = matrix[i][j];
            printf("%d\t", transpose[j][i]);
        }
        printf("\n");
    }

    return 0;
}

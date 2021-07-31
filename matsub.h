void matsub()
{
    printf("\nMatrix Subtraction.\n");
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of coloumns: ");
    scanf("%d", &col);

    int matA[row][col];
    int matB[row][col];
    int matC[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the [%d][%d] element of the matrix A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the [%d][%d] element of the matrix B: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matC[i][j] = matA[i][j] - matB[i][j];
        }
    }
    printf("\nThe resultant Matrix is.\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }
}
void mattran()
{
    printf("\nTranspose of Matrix\n");
	int rone, cone;
	printf("Enter the no of rows: ");
	scanf("%d", &rone);
	printf("Enter the no of col: ");
	scanf("%d", &cone);

	int arrone[rone][cone];
	int arrres[cone][rone];

	for(int i = 0 ; i < rone ; i++){
		for(int j = 0 ; j < cone; j++){
			printf("Enter the [%d][%d] element of the matrix: ", i , j);
			scanf("%d", &arrone[i][j]);
		}
	}

	for(int i = 0; i < rone ; i++){
		for(int j = 0 ; j < cone; j++){
			arrres[j][i] = arrone[i][j];
		}
	}

	printf("\nThe original matrix is\n");
	for(int i = 0 ; i < rone; i++){
		for(int j = 0 ; j < cone; j++){
			printf("%d\t", arrone[i][j]);
		}
		printf("\n");
	}

	printf("\nThe result of Transposition is\n");
	for(int i = 0 ; i < cone; i++){
		for(int j = 0 ; j < rone; j++){
			printf("%d\t", arrres[i][j]);
		}
		printf("\n");
	}
}
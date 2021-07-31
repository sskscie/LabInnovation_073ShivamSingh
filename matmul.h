void matmul()
{
    printf("\nMultiply Matrix\n");
	int rone, rtwo, cone, ctwo, sum = 0;
	printf("Enter the number of rows of matrix A: ");
	scanf("%d", &rone);
	printf("Enter the number of coloumns of matrix A: ");
	scanf("%d", &cone);
	printf("Enter the number of rows in matrix B: ");
	scanf("%d", &rtwo);
	if(cone != rtwo){
		printf("Multiplication not possible!\n");
		exit(0);
	}
	printf("Enter the number of coloumns in matrix B: ");
	scanf("%d",&ctwo);
	int arrone[rone][cone];
	int arrtwo[rtwo][ctwo];
	int arrres[rone][ctwo];

	
	
	for(int i = 0; i < rone; i++){
		for(int j = 0 ; j < cone; j++){
			printf("Enter the %d and %d element of the matrix A: ", i , j);
			scanf("%d", &arrone[i][j]);
		}
	}
	for(int i = 0; i < rtwo; i++){
		for(int j = 0 ; j < ctwo; j++){
			printf("Enter the %d and %d element of the matrix B: ", i , j);
			scanf("%d", &arrtwo[i][j]);
		}
	}

	//multiplication part
	for(int i = 0; i < rone; i++){
		for(int j = 0 ; j < ctwo; j++){
			for(int k = 0 ; k < rone; k++){
				sum += arrone[i][k]*arrtwo[k][j];
			}
			arrres[i][j] = sum;
			sum = 0;
		}
	}
	printf("The output of matrix multiplication\n");

	//printing the result 
	for(int i = 0 ; i < rone; i++){
		for(int j = 0; j < ctwo; j++){
			printf("%d\t", arrres[i][j]);
		}
		printf("\n");
	}
}
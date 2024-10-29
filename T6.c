#include <stdio.h>

int main(){

	int matrix1[2][2];
	int matrix2[2][2];

	       //// matrix initialization
         printf("\nEnter Matrix Values:\n");
        for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                        int mat_value;
                        scanf("%d", &mat_value);
                        matrix1[i][j] = mat_value;
    } }

	//// matrix initialization
	 printf("\nEnter Matrix Values:\n");
        for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
			int mat_value;
			scanf("%d", &mat_value);
                        matrix2[i][j] = mat_value;
    } }

	
	
	
	////multiplication
	int result[2][2];
    	printf("\nmatrix Multiplication:\n");
    	for (int i = 0; i < 2; i++) {
    		for (int j = 0; j < 2; j++) {
			
			result [i][j] =0;
			for (int k=0; k<2; k++){
				result[i][k] += matrix1[i][k] * matrix2[k][j];
    } 
		}printf("\n");	}


	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 2; j++) {
            		printf("%d ", result[i][j]);
        }
        	printf("\n");
    }

    return 0;
} 


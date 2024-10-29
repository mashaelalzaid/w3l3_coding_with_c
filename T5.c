#include <stdio.h>

int main(){



	int vec[3];
	int matrix[2][3];
	//// Vector initialization
	printf("\nEnter Vector Values:\n");
	for(int i=0; i<3;i++){
		int vec_value;

		scanf("%d", &vec_value);
		vec[i] = vec_value;
	}
	//// matrix initialization
	 printf("\nEnter Matrix Values:\n");
        for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 3; j++) {
			int mat_value;
			scanf("%d", &mat_value);
                        matrix[i][j] = mat_value;
    } }

	
	
	
	////multiplication
	int result[2];
    	printf("\nVector Multiplication:\n");
    	for (int i = 0; i < 2; i++) {
    		for (int j = 0; j < 3; j++) {
        		//printf("m %d", matrix[i][j]);
			//printf("\n v %d", vec[j]);	
			result[i] = matrix[i][j] * vec[j];
			
			printf("%d\t",result [i]);
    } 
		printf("\n");
	}

    return 0;
} 


//PROBLEM C ARRAY//

#include <stdio.h>

int main (){
	int T, N;
	scanf("%d", &T);
	
	for (int tc = 1 ; tc <= T ; tc++){
		scanf("%d", &N);
		
		int matrix1[N][N];
		int matrix2[N][N];
		int matrix3[N][N];
		int temp[N][N];
		int hasil[N][N];
		
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				scanf("%d", &matrix1[i][j]);
			}
		}
		
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				scanf("%d", &matrix2[i][j]);
			}
		}
		
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				scanf("%d", &matrix3[i][j]);
			}
		}
		
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				temp[i][j] = 0;
				for (int k = 0 ; k < N ; k++){
					temp[i][j] += matrix1[i][k]*matrix2[k][j];
				}
			}
		}
		
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				hasil[i][j] = 0;
				for (int k = 0 ; k < N ; k++){
					hasil[i][j] += temp[i][k]*matrix3[k][j];
				}
			}
		}
		printf("Case #%d:\n", tc);
		for(int i = 0 ; i < N ; i++){
			for (int j = 0 ; j < N ; j++){
				printf("%d", hasil[i][j]);
				if (j < N - 1){
					printf(" ");
				}
			}
			printf("\n");
			}

	}
}

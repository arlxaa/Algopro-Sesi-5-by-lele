//ARRAY PROBLEM G//

#include <stdio.h>

int main(){
	int n, A[120][120], x[120], y[120];
	scanf("%d", &n);
	for (int r = 0; r < n; r++){
		for (int c = 0; c < n; c++){
			scanf("%d", &A[r][c]);
		}
	}
	
	for (int i = 0; i < n; i++){
		for(int j = 0 ; j < n ; j++){
			x[j] = 0;
			y[j] = 0;
		}
		
		for (int j = 0; j < n; j++){
			x[A[i][j]-1]++;
			if (x[A[i][j]-1] > 1){
				printf("Nay\n");
				return 0;
			}
		}
		for (int j = 0; j<n ; j++){
			y[A[j][i]-1]++;
			if (y[A[j][i]-1] > 1){
				printf("Nay\n");
				return 0;
			}
		}	
	}
	printf("Yay\n");
	
	
}

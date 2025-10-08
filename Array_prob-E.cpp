//ARRAY PROBLEM E//

#include <stdio.h>

int main (){
	int t, n, a[210], b[210], sum;
	scanf("%d", &t);
	
	for (int tc = 1 ; tc  <= t ; tc++){
		scanf("%d", &n);
		for (int i = 0 ; i < n ; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		int counter = 0;
		for (int i = 0 ; i < n -1 ; i++){
			for (int j = i + 1; j < n ; j++){
				sum = a[i] + a[j];
				for (int k = 0 ; k < n ; k++){
					if (b[k] == sum){
						b[k] = 0;
						counter++;
					}
				}
			}
		}
		
		printf("Case #%d: %d\n", tc, counter);
		
	}
}




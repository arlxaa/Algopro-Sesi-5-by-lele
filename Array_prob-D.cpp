//PROBLEM D ARRAY//

#include <stdio.h>

int main (){
	int t, n, m, x;
	
	scanf ("%d", &t);
	
	for (int tc = 0 ; tc < t ; tc++){
		
		long long sum = 0;
		
		scanf("%d %d", &n, &m);
		
		for (int i = 0; i < n ; i++){
	
			int max = 0;
			
			for (int j = 0 ; j < m ; j++){
				scanf("%d", &x);
				if (max < x){
					max = x;
				}
			}	
			sum += max;	
		}
		printf("Case #%d: %lld\n", tc+1, sum);
	}
}

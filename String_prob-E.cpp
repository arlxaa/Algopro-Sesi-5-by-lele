//PROBLEM E STRING//

#include <stdio.h>

int main (){
	int t, n, a, b;
	char angka[1010];
	
	scanf ("%d", &t);
	
	for (int tc = 0 ; tc < t ; tc++){
		
		scanf("%d %s", &n, angka); getchar();
		
		for (int uc = 0 ; uc < n ; uc++){
			scanf("%d %d", &a, &b); getchar();
			
			int start = a - 1;
			int end = b - 1;
			
			while (start < end){
				char temp = angka[start];
				angka[start] = angka[end];
				angka[end] =  temp;
				start++;
				end--;
			}
			
		}
		printf("Case #%d: %s\n", tc+1, angka);
		
	}
	
}

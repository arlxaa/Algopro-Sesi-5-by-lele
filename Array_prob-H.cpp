//array problem H Hotel

#include <stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	int x[n];
	
	for (int i = 0 ; i < n ; i++){
		scanf("%d", &x[i]);
	}
	int counter = 1;
	
	for (int i = 0; i < n - 1 ; i++){
		for (int j = i+1 ; j < n ; j++){
			if (x[i]==x[j]){
				break;
			} else if (i == n-1 || j == n - 1){
				counter++;
			}
			
		}
	}
	printf("%d\n", counter);
	
}


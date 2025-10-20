#include <stdio.h>


int main (){
	int t;
	int x[5050];
	
	scanf("%d", &t);
	for (int tc = 0 ; tc < t; tc++){
		scanf("%d", &x[tc]);
	}
	int happy = 0;
	
	for (int i = 0 ; i < t ; i++){
		int unavailable = 0;
		for (int j = 0 ; j < i ; j++){
			if (x[i] == x[j]){
				unavailable = 1;
				break;
			}	
		}
		if (unavailable == 0){
				happy++;
		}
		
		
	}
	
	printf("%d\n", happy);
	
	
	
	
}

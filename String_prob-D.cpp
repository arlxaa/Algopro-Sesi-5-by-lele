//PROBLEM D STRING//
#include <stdio.h>
#include <string.h>

int main (){
	int t, x;
	char kata[1010];
	
	scanf("%d", &t);
	for (int tc = 0 ; tc < t ; tc++){
		scanf("%s", kata);	
		x =  strlen (kata);
		printf("Case #%d : ", tc + 1);
		
		for (int i = x-1 ; i >= 0; i--){
			printf("%c", kata[i]);
		}
		printf("\n");
	}	
}

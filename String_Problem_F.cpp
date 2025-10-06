//PROBLEM B STRING//

#include <stdio.h>
#include <string.h>

int main(){
	int t, x, pal;
	char kata[550];
	scanf("%d", &t);
	
	for (int tc = 1 ; tc <= t ; tc++){
		scanf("%s", kata);
		
		x = strlen(kata);
		
		int start = 0;
		int end = x-1;
		
		pal = 1;
		while (start < end){

			if (kata[start] == kata[end]){
				start++;
				end--;
				pal = 1;
					
			} else{
				pal = 0;
				break;
			}	
		}
		printf("Case #%d: ", tc);
		if (pal == 1){
			printf("Yay, it's a palindrome\n");
		} else{
			printf("Nah, it's not a palindrome\n");
		}	
}
		
		
	}


//STRING PROBLEM B PALINDROME

#include <stdio.h>
#include <string.h>

int main (){
	int t, length;
	char kata[510];
	
	scanf("%d", &t);
	
	for (int tc = 1; tc <= t; tc++){
		scanf("%s", kata);
		length = strlen(kata);
		int pal = 1; 
		//in case kl dia input cuma 1 huruf
		int start = 0;
		int end = length - 1;
		
		while (end > start){
			if(kata[start] != kata[end]){
				pal = 0; 
				break;
			} else{
				pal = 1;
				start++;
				end--;
			}
		}
		
		printf("Case #%d: ", tc);
		
		if (pal == 1){
			printf("Yay, it's a palindrome\n");
		} else if (pal == 0){
			printf("Nah, it's not a palindrome\n");
		}
	}
}




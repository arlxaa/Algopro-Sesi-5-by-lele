//PROBLEM A string//

#include <stdio.h>
#include <string.h>

int main (){
	int t, x;
	char kata[100010];
	
	scanf("%d", &t);
	
	for (int tc = 1 ; tc <= t ; tc++){
		scanf("%s", kata);
		
		int index[26] = {0}; //karena alfabet ada 26
		
		x = strlen (kata);
		
		for (int brp = 0 ; brp < x; brp++){
			index[kata[brp] - 'a']++;
		}
		
		int unik = 0;
		
		for (int i = 0 ; i < 26 ; i++){
			if (index[i] > 0){
				unik++;
			}
		}
		
		printf("Case #%d: ", tc);
        if (unik % 2 == 0) {
            printf("Yay\n"); 
        } else {
            printf("Ewwww\n");
    }
		
}
}

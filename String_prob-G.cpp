//PROBLEM G STRING//

#include <stdio.h>
#include <string.h>

int main(){
	int t, n;
	char kata [110], hasil[110];
	
	scanf("%d", &t);
	
	for (int tc = 1 ; tc <= t ; tc++){
		scanf("%d", &n); getchar();
		scanf("%[^\n]", kata); getchar();
		int x = 0;
		for (int i = 0 ; i < n ; i++){
			
			if (kata[i] >= 'a' && kata[i] <= 'z'){
				hasil[x] = kata[i];
				x++;	
			}
			
		}
		hasil[x] = '\0';
		printf("Case #%d: %s\n", tc, hasil);
}
}


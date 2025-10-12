//STRING PROBLEM C
#include <stdio.h>
#include <string.h>

int main (){
	int t, length;
	char kata[1010];
	
	scanf ("%d", &t);
	
	for (int tc = 1 ; tc <= t ; tc++){
		scanf("%s", kata);
		
		int x =  strlen(kata);	//baca panjang katanya
		
		char hasil[1010];
		int kunci[1010];

		
		for (int i = 0; i < x ; i++){
			if (kata[i] >= 'A' && kata[i] <='D'){
				hasil[i] = 'A';
				kunci[i] = kata[i] - 'A';
			} else if (kata[i] >= 'E' && kata[i] <='H'){
				hasil[i] = 'E';
				kunci[i] = kata[i] - 'E';
			} else if (kata[i] >= 'I' && kata[i] <='N'){
				hasil[i] = 'I';
				kunci[i] = kata[i] - 'I';
			} else if (kata[i] >= 'O' && kata[i] <='T'){
				hasil[i] = 'O';
				kunci[i] = kata[i] - 'O';
			} else if (kata[i] >= 'U' && kata[i] <='Z'){
				hasil[i] = 'U';
				kunci[i] = kata[i] - 'U';
		}
	}
		printf("Case #%d:\n", tc);
		
		for (int i = 0 ; i < x ; i++){
			printf("%c", hasil[i]);
		}
		
		printf("\n");
		
		for (int i = 0 ; i < x ; i++){
			printf("%d", kunci[i]);
		}
		
		printf("\n");
		
}

}

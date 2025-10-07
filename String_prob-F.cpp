//PROBLEM F STRING//
#include <stdio.h>
#include <string.h>

int main (){
	int t;
	//t testcasenya
	int m, x;
	//x panjang katanya
	//m jumlah bilangan bulat yang mau diganti
	char kata[1010];
	
	scanf("%d", &t);
	
	for (int tc = 1 ; tc <= t ; tc++){
		scanf("%s", kata);
		scanf("%d", &m); getchar();
		char old;
		char neww;
		for (int i = 0; i < m ; i++){
			scanf("%c %c", &old, &neww); getchar();
			x = strlen (kata);

			for(int j = 0; j < x ; j++){
				 if (kata[j] == old){
					kata[j] = neww;
				}
			}	

		}

		
		printf("Case #%d: %s\n", tc, kata);
	
}}

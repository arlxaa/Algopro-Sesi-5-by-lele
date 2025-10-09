//STRING PROBLEM H
#include <stdio.h>

int main (){
	int t, x, y; 
	// t tuh testcase
	// x tuh panjang string
	// y tuh mau ditambah brp
	scanf("%d", &t);
	for (int tc = 1; tc <= t ; tc++){
		scanf ("%d %d", &x, &y);
		char kata[x+1]; 
		char temp[x+1];
		char hasil[x+1];
		
		scanf("%s", kata);
		
		for (int  i = 0 ; i < x; i++){
			temp[i] = kata[i] - 'a';
			temp[i] = (temp[i]+y)%26;
			hasil[i] = (temp[i] + 'a');
		} 
		printf("Case #%d: ", tc);
		for (int i = 0 ; i < x ; i++){
			printf("%c", hasil[i]);
		}
		printf("\n");
	}
}


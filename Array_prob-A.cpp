// PROBLEM A ARRAY//

#include <stdio.h>
#include <string.h>

int main (){
	int n;
	// n tuh brp bnyak bilangan bulatnya
	
	scanf("%d", &n);
	// scan berapa banyak bilangan bulatnya
	
	int a[n], b[n], hasil[n];

	// declare a nya berapa panjangnya
	// b tuh bilangan bulat yang mau diurutinnya
	// hasil tuh hasilnya	
	
	 
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
		// baca urutannya
	} 
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &b[i]);
		// baca bilangan bulat yg mau diurutinnya
	} 
	
	for (int i = 0 ; i < n ; i++){
		hasil[a[i]] = b[i];
		// hasil bakal nyimpen bilangan bulat di urutan ke a[i]
	}
	
	for (int i = 0 ;  i < n ; i++){
		printf("%d", hasil[i]);
		if (i < n-1){
			printf(" ");
		}
	}
	
	printf("\n");
}


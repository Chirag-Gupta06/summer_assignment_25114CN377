/*
Write a program to Print reverse number 
triangle. 
 
12345 
1234 
123 
12
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=n; i>=1; i--) {
	    printf("\n");              
		for(int j=1; j<=i; j++) {
			printf("%d",j);
			
		}
	}


	return 0;
}


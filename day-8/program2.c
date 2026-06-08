/*
Write a program to Print number triangle. 
1 
12 
123 
1234 
12345 
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
	    printf("\n");
		for(int j=1; j<=i; j++) {
			printf("%d",j);
			
		}
	}


	return 0;
}

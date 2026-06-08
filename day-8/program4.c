/*
Write a program to Print repeated-number 
pattern. 
1 
22 
333 
4444 
55555  
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
	    printf("\n");
		for(int j=1; j<=i; j++) {
			printf("%d",i);
			
		}
	}


	return 0;
}

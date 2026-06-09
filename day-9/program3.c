/*
Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE 
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=65; i<=n+65-1; i++) {
	    printf("\n");              
		for(int j=65; j<=i; j++) {
			printf("%c",i);
			
		}
	}


	return 0;
}


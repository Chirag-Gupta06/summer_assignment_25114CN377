/*
Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE 
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=65; i<=n+65-1; i++) {// here we do -1 bcauz 65+5=70
	    printf("\n");              // which print f also (f=70)
		for(int j=65; j<=i; j++) {
			printf("%c",j);
			
		}
	}


	return 0;
}

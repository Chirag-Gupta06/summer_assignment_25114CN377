/*
Write a program to Print hollow square
pattern.
*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>
int main() {
	int n;
	printf("how many rows you want: ");// for 5 rows enter 5
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
	    printf("\n");
		if(i==1 || i==n) {
			for(int j=1; j<=n; j++) {
				printf("*");
			}
		}
		else {
		    for( int k=1;k<=n;k++){
		        if(k==1 || k==n){
		            printf("*");
		        }
		        else{
		            printf(" ");
		        }
		    }

		}
	}

	return 0;
}



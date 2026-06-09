/*
Write a program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
********* 

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");//assume rows=5
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        printf("*");
        

}
}
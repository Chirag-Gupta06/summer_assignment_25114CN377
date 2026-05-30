// [program 4]
 //Write a program to Count digits in a number.
#include<stdio.h>
int main(){
    int n,c,r=0;
    printf("enter the number");
    scanf("%d",&n);
    c=n;
    while(c>0){
        int a;
        a=c/10;
        r=r+1;
        c=a;
    }
    printf("the number of digits %d",r);//only for integer number only
    return 0;
}
//    program 3
 //Write a program to Find factorial of a number
    #include<stdio.h>
    int main(){
        int n,a=1;
        printf("enter the number ");
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
            a=a*i;
        }
printf("the factorial of number is %d",a);
return 0;
    }
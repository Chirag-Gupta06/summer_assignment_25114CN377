//Write a program to Calculate sum of first N natural numbers.
    //program 1
    #include<stdio.h>
    int main(){
        int n,a=0;
        printf("enter the number ");
        scanf("%d",&n);
        printf("\n");
        for(int i=1;i<=n;i++){
            a=i+a;

        }
        printf("%d",a);
        return 0;
    }
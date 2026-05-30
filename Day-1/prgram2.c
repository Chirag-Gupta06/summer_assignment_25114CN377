//program 2
    // //Write a program to Print multiplication table of a given number. 
    #include<stdio.h>
    int main(){
        int n;
        printf("enter the number for print the the table");
        scanf("%d",&n);
        
        printf("the mutiplication table of %d\n",n);
        for(int i=1;i<=10;i++){
            printf("%d * %d =%d ",n,i,n*i);
            printf("\n");

        }
        printf("the table of %d is printed above",n);
        return 0;
    }
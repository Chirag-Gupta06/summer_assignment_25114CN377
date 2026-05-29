// //program 1
// //Write a program to Find sum of digits of a number. 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,c,r=0,a,r1=0;
//     printf("enter the number");
//     scanf("%d",&n);

//     c=n;
//     while(c>0){
//         int b;
//         b=c/10;
//         r=r+1;
//         c=b;

//     }
//     printf("the entered number is:-%d",n);
//     printf("\nthe number of digits are :- %d",r);
//     a=r;
//     c=n;
//     for (int i = a; i > 0; i--) {
//         int b = (int)pow(10, i - 1);  // 10^(i-1)
//         int b1 = c / b;            // leftmost digit
//         r1 = r1 + b1;                    // add digit to sum
//         c = c % b;                    // remove that digit
    
//     }
// printf("\nthe sum of enter digits are :-%d",r1);
// return 0;

// }



//program 2
//Write a program to Reverse a number. 
// #include<stdio.h>
// int main(){
//     int n,r1=0;
//     printf("enter a number:- ");
//     scanf("%d",&n);
//     int c=n;
//     while(c>0){
//         int a ,b;
//         b=c/10 ;
//         a=c%10;
//         r1=(r1*10)+a;
//         c=b;   }
//         printf("the reversed number is :-%d",r1);
//         return 0;
// }








//program 3
//Write a program to Find product of digits.
// #include<stdio.h>
// int main(){
//      int n,p1=1;
//     printf("enter a number:- ");
//     scanf("%d",&n);
//     int c=n;
//     while(c>0){
//         int b;
//         b=c%10;
//         p1=p1*b;
//         c=c/10;

// }
// printf("the products of digits are :-%d",p1);
// return 0;

// }



//program 4
//Write a program to Check whether a number is palindrome. 
// #include<stdio.h>
// int main(){
//     int n,r1=0;
//     printf("enter a number:- ");
//     scanf("%d",&n);
//     int c=n;
//     while(c>0){
//         int a ,b;
//         b=c/10 ;
//         a=c%10;
//         r1=(r1*10)+a;
//         c=b;   }
//         printf("the reversed number is :-%d",r1);
//         if(n==r1){
//             printf("\nthe number is palindrome");
//         }
//         else{
//             printf("the number is not palindrome");
//         }
//         return 0;
// }



















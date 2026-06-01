#include<stdio.h>
int main(){
    int n,i,num;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Table of number %d\n");
    
    for(i=0;i<=10;i++){
        num=n*i;
     printf("%d * %d = %d",n,i,num);}
     return 0;
}
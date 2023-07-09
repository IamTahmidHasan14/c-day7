#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Integer Values: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    sub(a,b);
    mult(a,b);
    div(a,b);
}
    sum(int m,int n){
        int result;
        result=m+n;
        printf("\nAddtion: %d\n",result);
        return 0;
    }
    sub(int m,int n){
        int result;
        result=m-n;
        printf("Subtraction: %d\n",result);
        return 0;
    }
    mult(int m,int n){
        int result;
        result=m*n;
        printf("Multiplication: %d\n",result);
        return 0;
    }
    div(int m,int n){
        int result;
        result=m/n;
        printf("Division: %d\n",result);
        return 0;
    }

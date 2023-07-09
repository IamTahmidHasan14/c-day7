#include <stdio.h>
int main()
{
    int sum;
    sum = add();
    printf("Sum of numbers= %d\n", sum);
}
int add()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

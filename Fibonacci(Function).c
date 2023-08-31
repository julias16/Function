#include<stdio.h>
void printFibo(int n)
{
    int i, first=0, second=1, next;
    printf("Fibonacci series of %d terms: ", n);
    printf("%d %d ", first, second);
    for(i=0; i<n-2; i++)
    {
        next= first+second;
        first= second;
        second= next;
        printf("%d ", next);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printFibo(n);

    return 0;
}

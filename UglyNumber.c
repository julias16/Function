// Write a C program to determine Nth Ugly Number using function

#include<stdio.h>
int ugly(int i)
{
    while(i%2==0)
        i= i/2;
    while(i%3==0)
        i= i/3;
    while(i%5==0)
        i= i/5;
    if(i==1)
        return 1;
    else
        return 0;
}
int getNthUglyNum(int num)
{
    int i=1, count= 1;
    while(num>count)
    {
        i++;
        if(ugly(i))
            count++;
    }
    return i;
}

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    int ans= getNthUglyNum(num);
    printf("%dth ugly number is %d\n", num, ans);
    return 0;
}

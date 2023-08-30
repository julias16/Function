// Write a C program to determine Nth Armstrong Number using function

#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int i, count=1;
    for(i=1; i<=100000; i++)
    {
        int temp=i, rem, sum=0, digit;
        digit= floor(log10(temp)+1); // for counting digit
        while(temp!=0)
        {
            rem= temp%10;
            sum= sum+ pow(rem, digit);
            temp= temp/10;
        }
        if(i==sum)
        {
          if(count==n)
            return i;
          else
            count++;
        }
    }
}
int main()
{
    int n;
    printf("Enter n to find nth armstrong number (range: 1-31): ");
    scanf("%d", &n);
    while(n>31)
    {
        printf("Not in range. Please enter n again: ");
        scanf("%d", &n);
    }
    int num= armstrong(n);
    printf("%d", num);
    return 0;
}


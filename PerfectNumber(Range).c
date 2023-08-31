#include<stdio.h>

//Function to check if a number is perfect
int isPerfect(int num)
{
    int i, sum=0;
    //Find divisors and calculate the sum
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
            sum= sum+i;
    }
    //Check if the sum of divisors is equal to the number itself
    return (sum==num);
}

//Function to print all perfect numbers within a range
void PrintPerfectNumInRange(int start, int end)
{
    int i;
    printf("Perfect numbers in the range %d to %d: ", start, end);
    for(i= start; i<=end; i++)
    {
        if(isPerfect(i))
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);
    PrintPerfectNumInRange(start, end);
}

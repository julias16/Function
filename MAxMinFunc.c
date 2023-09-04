#include<stdio.h>

int getMax(int num[], int n)
{
    int i, max= num[0];
    for(i=1; i<n; i++)
    {
        if(num[i]> max)
        {
            max= num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{
    int i, min= num[0];
    for(i=1; i<n; i++)
    {
        if(num[i]<min)
        {
            min= num[i];
        }
    }
    return min;
}


int main()
{
    int num[100], n, i;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("The maximum value: %d\n", getMax(num, n));
    printf("The minimum value: %d\n", getMin(num, n));
}


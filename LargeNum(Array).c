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


int main()
{
    int num[100], n, i;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("The maximum value: %d", getMax(num, n));
}

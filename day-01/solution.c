#include <stdio.h>
#define MAX 10

int prime(int n)
{   int i;
    if(n<=1)
        return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
 return 1;
}

int main()
{
    int arr[MAX];
    int n;
    printf("Enter the no of array:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The prime numbers are:");
    
      for(int i=0;i<n;i++)
      {
        if(prime(arr[i]))
         printf("%d",arr[i]);
    }
    
    return 0;
}

class:s4cs3

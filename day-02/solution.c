#include <stdio.h>
int secondlargest(int arr[],int N) {
    int largest = arr[0];
    int second = -1;

    for(int i=1;i<= N;i++)
    {
        if(arr[i]>largest) 
        {
            second=largest;
            largest=arr[i];
        } 
        else if(arr[i]!=largest && arr[i]> second) 
        {
            second=arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[]={10, 5, 20, 8, 20, 3};
    int size=6;
    int N=5;  

    if(N< 0 || N>=size) 
    {
        printf("-1");
        return 0;
    }

    int result=secondlargest(arr,N);
    printf("%d",result);
    return 0;
}

class:s4cs3

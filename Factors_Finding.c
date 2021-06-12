#include <stdio.h>

int main()
{   
    int num;
    scanf("%d",&num);
    int i=1,count=0;
    while(i<=(num))
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    i=1;
    printf("%d\n",count);
    int arr[count],j=0;
    while (i<=(num))
    {
        if(num%i==0)
        {
            arr[j]=i;
            j++;
        }
        i++;
    }
    i=0;
    while(i<count)
    {
        printf("%d",arr[i]);
        printf(" ");
        i++;
    }
    
    return 0;
}
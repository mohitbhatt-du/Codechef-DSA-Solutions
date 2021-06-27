#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,temp{0}; scanf("%d",&t); int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
     for (int i = 0; i < t; i++) 
    {   
        for (int j = i+1; j < t; j++)
        {   
           if(arr[i] < arr[j])
            temp = arr[i];  
            arr[i] = arr[j];  
            arr[j] = temp;
        }   
    }
    for (int i = 0; i < t; i++) 
    {   
        printf("%d", arr[i]);
    }  

    return 0;
}
/**************************************************************************************************
************************************SOLUTION-BY-MOHIT**********************************************
***************************************************************************************************/
//Program to find middle element
#include <bits/stdc++.h>

int main()
{
    int i,t,sum{0},ans{0};
    int arr[5];
    std::cin >> t;
    while(t--)
    {
        for(i=0;i<5;i++)
        {
            std::cin >> arr[i];
        }
        std::sort(arr, arr+i);
        std::cout << arr[2] << std::endl;
        // Trying other method!!!!!!!!!!!!!!
        // for(i=0;i<5;i++) 
        // {
        //     std::cout << arr[i];
        // }
        // std::cout << std::endl;
    }
    return 0;
}
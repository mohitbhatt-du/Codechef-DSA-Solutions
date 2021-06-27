#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={233,3,4,2,43,53,55,44};
    int size = sizeof(arr)/sizeof(int);
    int element = 53;
    cout << linearSearch(arr, size, element) << endl;
    return 0;
}
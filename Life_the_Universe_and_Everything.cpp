#include<iostream>
using namespace std;

void sum()
{
    int arr[100];
    for(int i=0;i<100;i++)
    {
        cin >> arr[i];
        if(arr[i]==42)
        {
            for(int j=0;j<i;j++)
            {
                cout << arr[j] << endl;
            }
            break;
        }
    }
}

int main()
{
    sum();
    
    return 0;
}
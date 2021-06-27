#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,x;
    cin >> n;
    long long int arr[n];
    for (i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    x=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]*(n-i)>x)
        {
            x=arr[i]*(n-i);
        }
    }
    cout << x;

    return 0;
}
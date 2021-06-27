#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long int n,k,i;
    cin >> n >> k;
    long int arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    for(i = 0; i < k; i++){
        if(arr[i] == k){
            cout << "1" << endl;
            break;
        }
    }
      
    if(i == k){

        cout  << "-1" << endl;
    }
    
   return 0;
}
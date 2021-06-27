#include<bits/stdc++.h>
using namespace std;

void reverse(long int t)
{
    long int ldigit=0;
    while(t--)
    {
        long int n;
        cin >> n;
        long int ans = 0;
        
        while(n>0)
        {
            ldigit=n%10;
            n/=10;
            ans=ans*10+ldigit;
        }
        cout << ans << endl;
        
    }
}

int main()
{
    long int t;
    cin >> t;
    reverse(t);
    return 0;
}